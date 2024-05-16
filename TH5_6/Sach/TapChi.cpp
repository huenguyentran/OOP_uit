#include "TapChi.h"
TapChi::TapChi() {}
TapChi::~TapChi() {}

void TapChi::nhap()
{
	Sach::nhap();
	std::cout << "nhap dang tap chi: ";
	std::cin.ignore(1);
	std::getline(std::cin, dang_tap_chi);
}
void TapChi::xuat()
{
	Sach::xuat();
	std::cout << dang_tap_chi << "\n";
}