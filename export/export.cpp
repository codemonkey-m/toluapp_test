/*
** Lua binding: server
** Generated automatically by tolua++-1.0.92 on 02/03/21 19:29:30.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
extern "C" int  tolua_server_open (lua_State* tolua_S);

#include "export_func.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_Export (lua_State* tolua_S)
{
 Export* self = (Export*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"Export");
}

/* function: show_msg */
#ifndef TOLUA_DISABLE_tolua_server_show_msg00
static int tolua_server_show_msg00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* p = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   show_msg(p);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'show_msg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Export */
#ifndef TOLUA_DISABLE_tolua_server_Export_new00
static int tolua_server_Export_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Export",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Export* tolua_ret = (Export*)  new Export();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Export");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Export */
#ifndef TOLUA_DISABLE_tolua_server_Export_new00_local
static int tolua_server_Export_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Export",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Export* tolua_ret = (Export*)  new Export();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"Export");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Export */
#ifndef TOLUA_DISABLE_tolua_server_Export_delete00
static int tolua_server_Export_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Export",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Export* self = (Export*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: show of class  Export */
#ifndef TOLUA_DISABLE_tolua_server_Export_show00
static int tolua_server_Export_show00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Export",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Export* self = (Export*)  tolua_tousertype(tolua_S,1,0);
  const char* p = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'show'",NULL);
#endif
  {
   self->show(p);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'show'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: get_export_obj */
#ifndef TOLUA_DISABLE_tolua_server_get_export_obj00
static int tolua_server_get_export_obj00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Export* tolua_ret = (Export*)  get_export_obj();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Export");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_export_obj'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: del_export_obj */
#ifndef TOLUA_DISABLE_tolua_server_del_export_obj00
static int tolua_server_del_export_obj00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Export",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Export* p = ((Export*)  tolua_tousertype(tolua_S,1,0));
  {
   del_export_obj(p);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'del_export_obj'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
int tolua_server_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_function(tolua_S,"show_msg",tolua_server_show_msg00);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Export","Export","",tolua_collect_Export);
  #else
  tolua_cclass(tolua_S,"Export","Export","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Export");
   tolua_function(tolua_S,"new",tolua_server_Export_new00);
   tolua_function(tolua_S,"new_local",tolua_server_Export_new00_local);
   tolua_function(tolua_S,".call",tolua_server_Export_new00_local);
   tolua_function(tolua_S,"delete",tolua_server_Export_delete00);
   tolua_function(tolua_S,"show",tolua_server_Export_show00);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"get_export_obj",tolua_server_get_export_obj00);
  tolua_function(tolua_S,"del_export_obj",tolua_server_del_export_obj00);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 int luaopen_server (lua_State* tolua_S) {
 return tolua_server_open(tolua_S);
};
#endif

