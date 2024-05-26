#include "DanhSachNV.h"

int main()
{
	DanhSachNV danhsach;
	danhsach.input();
	
	fstream file("file.txt");
	if (!file) return 1;

	danhsach.ghi(file);

	danhsach.TuongTac();

	danhsach.KeManh(file);

	file.close();

	return 0;
}