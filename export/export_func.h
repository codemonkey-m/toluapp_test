#pragma once

//tolua_begin
void show_msg(const char* p);


class Export
{
public:
	Export() {}
	~Export() {}

	void show(const char* p);
};

Export* get_export_obj();
void del_export_obj(Export* p);

//tolua_end
