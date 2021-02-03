#include "../stdafx.h"
#include "export_func.h"

void show_msg(const char* p)
{
	std::cout << "来自lua的输出 " << p << std::endl;
}

Export* get_export_obj()
{
	return new Export;
}

void del_export_obj(Export* p)
{
	if (p)
		delete p;
}

void Export::show(const char* p)
{
	std::cout << "来自lua的对象调用 " << p << endl;
}
