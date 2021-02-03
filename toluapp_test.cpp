// lua_test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include "tolua++.h"
extern "C" {
#include "lua.h"
#include "lualib.h"
}

extern  int luaopen_server(lua_State* tolua_S);

static void stackDump(lua_State* L)
{
	int i = 0;
	int type = 0;
	int top = lua_gettop(L);

	printf("当前堆栈有%d个元素: \n", top);
	for (i = 1; i <= top; i++) {
		type = lua_type(L, i);
		printf("\t元素%d类型为: %s\t", i, lua_typename(L, type));
		switch (type) {
		case LUA_TSTRING:
			printf("'%s'", lua_tostring(L, i));
			break;
		case LUA_TBOOLEAN:
			printf(lua_toboolean(L, i) ? "true" : "false");
			break;
		case LUA_TNUMBER:
			printf("%g", lua_tonumber(L, i));
			break;
		case LUA_TFUNCTION:
			lua_Debug ar;
			memset(&ar, 0, sizeof(ar));
			lua_getstack(L, 0, &ar);
			lua_getinfo(L, "Snl", &ar);
			printf("%s\t%s", ar.short_src, (ar.name ? ar.name : "<NA>"));
			break;
		default:
			break;
		}
		printf("\n");
	}
	printf("\n");
	return;
}

static void bail(lua_State* L)
{
	printf("加载文件错误:\n\t%s\n", lua_tostring(L, -1));
	exit(1);
}

int ScriptCallErrorDispatcher(lua_State* L)
{
	lua_Debug ar;
	int nlen = 0, nLvl = 0;
	printf("执行[%s]错误: %s\n", "lua_t", lua_tostring(L, -1));
	while (lua_getstack(L, (int)nLvl, &ar)) {
		lua_getinfo(L, "Snl", &ar);
		printf("\t [%s]: %s func:%s\n", ar.what, ar.namewhat, (ar.name ? ar.name : "<NA>"));
		nLvl++;
	}

	return 1;
}

template<typename T>
const char* type_name(T& t) {
	static char s[128] = { 0 };
	strcpy_s(s, 128, typeid(t).name());
	/**
	 * int		int
	 * int*		int *
	 * class	class 类名
	 * class*	class 类名 *
	 */
	static const char* cn = "class ";
	char* p = strstr(s, cn);
	if (p)
		strcpy_s(s, 128, p + strlen(cn));

	p = strchr(s, ' ');
	if (p)
		p[0] = NULL;

	return s;
}

void void_func() {

}

template<typename T>
void lua_push_obj(lua_State* L, T& t) {
	tolua_pushusertype(L, &t, type_name(t));
}

int main()
{
	//LUA虚拟机对象
	lua_State* m_pLua = luaL_newstate();
	luaL_openlibs(m_pLua);
	luaopen_server(m_pLua);

	lua_pushcfunction(m_pLua, ScriptCallErrorDispatcher);

	if (luaL_dofile(m_pLua, "script\\test0.lua"))
		bail(m_pLua);

	Export ex;
	lua_getglobal(m_pLua, "obj_call");
	lua_push_obj(m_pLua, ex);
	lua_pcall(m_pLua, 1, 1, -3);

	lua_getglobal(m_pLua, "lua_t");
	lua_pushstring(m_pLua, "汉字");
	lua_pcall(m_pLua, 1, 1, -3);

	cout << "来自lua的返回 " << lua_tonumber(m_pLua, -1) << endl;

#define CNT 1000000
	unsigned begin_tick = GetTickCount();
	for (int i = 0; i < CNT; ++i) {
		lua_getglobal(m_pLua, "empty_func");
		//lua_push_obj(m_pLua, ex);
		lua_pcall(m_pLua, 1, 1, -3);
	}
	cout << GetTickCount() - begin_tick << endl;

	begin_tick = GetTickCount();
	for (int i = 0; i < CNT; ++i) {
		void_func();
	}
	cout << GetTickCount() - begin_tick << endl;

	lua_close(m_pLua);
	system("pause");
	return 0;
}