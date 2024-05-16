#include "TuGiac.h"

TuGiac::TuGiac() : DaGiac()
{
	so_dinh = 4;
}
TuGiac::~TuGiac() {}

void TuGiac::nhap()
{
	std::cout << "--Nhap tu giac--\n";
	DaGiac::nhap();
}
void TuGiac::xuat()
{
	std::cout << "--Xuat tu giac--\n";
	DaGiac::xuat();
}