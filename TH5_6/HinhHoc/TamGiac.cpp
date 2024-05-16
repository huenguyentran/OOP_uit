#include "TamGiac.h"

TamGiac::TamGiac() : DaGiac()
{
	so_dinh = 3;
}
TamGiac::~TamGiac()
{

}

void TamGiac::nhap()
{
	std::cout << "--Nhap tam giac--\n";
	DaGiac::nhap();
}
void TamGiac::xuat()
{
	std::cout << "--Xuat tam giac--\n";
	DaGiac::xuat();
}