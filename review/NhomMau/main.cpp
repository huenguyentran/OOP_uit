#include "DanhSach.h"

int main()
{
	DanhSach NhomNguoi;
	NhomNguoi.nhapNhomNguoi();
	fstream file("list.txt");
	if (!file) return 1;

	NhomNguoi.ghi(file);
	NhomNguoi.kiemtraDiTruyen();
	NhomNguoi.timNguoiChoMau(file);

	file.close();

	return 0;
}