function lua_t(str)
	show_msg(str)
	show_msg('����')

	return 12369
end

function obj_call(obj)
	local oo = Export:new()
	oo:show("lua�����Ķ������")
	oo:delete()

	obj:show("c++�����Ķ������")

	ooo = get_export_obj()
	ooo:show("lua��c++��ȡ���Ķ���")
	del_export_obj(ooo)
end

function empty_func(obj)
	obj:empty()
end
