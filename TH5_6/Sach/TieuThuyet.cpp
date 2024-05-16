#include "TieuThuyet.h"

TieuThuyet::TieuThuyet() {}
TieuThuyet::~TieuThuyet() {}

void TieuThuyet::nhap()
{
	Sach::nhap();
	std::cout << "nhap the loai: ";
	std::cin.ignore(1);
	std::getline(std::cin, the_loai);
}
void TieuThuyet::xuat()
{
	Sach::xuat();
	std::cout << the_loai << "\n";
}