#include "QVThongThuong.h"
int QVThongThuong::tinh_sat_thuong()
{
	return satThuong = capDo * 3;
}

void QVThongThuong::xuat()
{
	cout << "QV Thong thuonng\t";
	QuaiVat::xuat();
}