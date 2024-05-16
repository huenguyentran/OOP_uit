#include "HinhBinhHanh.h"
#include "VectorCanh.h"

HinhBinhHanh::HinhBinhHanh() : TuGiac() {}
HinhBinhHanh::~HinhBinhHanh() {}

void HinhBinhHanh::nhap()
{
	std::cout << "--nhap hinh binh hanh--\n";
	while(1)
	{
		DaGiac::nhap();
		if (!la_hbh())
		{
			std::cout << "khong phai HbH nhapp lai!!\n";
		}
		else return;
	} 
}
void HinhBinhHanh::xuat()
{
	std::cout << "--xuat hinh binh hanh--\n";
	DaGiac::xuat();
}

bool HinhBinhHanh::la_hbh()
{
	set_canh();
	if (canh_[0]->doi_nhau(canh_[2]))
	{
		return 1;
	}
	else return 0;
}