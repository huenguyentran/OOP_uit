#include "SGK.h"

SGK::SGK() {}
SGK::~SGK() {}

void SGK::nhap()
{
	Sach::nhap();
	std::cout << "nhap khoi lop: ";
	std::cin.ignore(1);
	std::getline(std::cin, khoi_lop);
}
void SGK::xuat()
{
	Sach::xuat();
	std::cout << khoi_lop << "\n";
}