#include "DanhSachXeMay.h"

int main()
{
	DanhSachXeMay list;
	list.input();
	list.output();
	ofstream file("danh_sach_xe_may.txt");
	list.ghiDS(file);
	file.close();
	return 0;
}