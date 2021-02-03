function lua_t(str)
	show_msg(str)
	show_msg('中文')

	return 12369
end

function obj_call(obj)
	local oo = Export:new()
	oo:show("lua创建的对象调用")
	oo:delete()

	obj:show("c++传来的对象调用")

	ooo = get_export_obj()
	ooo:show("lua从c++获取到的对象")
	del_export_obj(ooo)
end

function empty_func(obj)
	obj:empty()
end
