#include "HinhChuNhat.h"
HinhChuNhat::HinhChuNhat() : HinhBinhHanh() {}
HinhChuNhat::~HinhChuNhat() {}

void HinhChuNhat::nhap()
{
	std::cout << "--Nhap hcn--\n";
	while (1)
	{
		DaGiac::nhap();
		if (!la_hcn())
		{
			std::cout << "Khong phai hcn, nhap lai\n";
		}
		else return;
	}
}
void HinhChuNhat::xuat()
{
	std::cout << "--Xuat HCN--\n";
	DaGiac::xuat();
}
bool HinhChuNhat::la_hcn()
{
	if (!la_hbh()) return 0;
	
	if(canh_[0]->vuong_goc(canh_[1])) return 1;
	return 0;
}