#include "DanhSachKH.h"

int main()
{
	DanhSachKH list;
	list.NhapDS();
	fstream file("data.txt");
	if (!file) return 1;
	list.ghiDS(file);
	file.close();

	list.KhachHangChiTieuNhieu();
	return 0;
}