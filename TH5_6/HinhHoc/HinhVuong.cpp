#include "HinhVuong.h"
HinhVuong::HinhVuong() : HinhChuNhat() {}
HinhVuong::~HinhVuong() {}

void HinhVuong::nhap()
{
	std::cout << "--Nhap hinh vuong--\n";
	while (1)
	{
		DaGiac::nhap();
		if (!la_hv())
		{
			std::cout << "nhap lai\n";
		}
		else return;
	}

}
void HinhVuong::xuat()
{
	std::cout << "--xuat hinh vuong--\n";
	DaGiac::xuat();
}
bool HinhVuong::la_hv()
{
	set_canh();
	if (!la_hcn()) return 0;

	if (canh_[0]->do_dai_bang_nhau(canh_[1]))
		return 1;
	return 0;
}