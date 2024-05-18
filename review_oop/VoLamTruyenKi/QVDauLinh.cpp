#include "QVDauLinh.h"

int QVDauLinh::tinh_sat_thuong()
{
	return satThuong = capDo * 7;
}

void QVDauLinh::xuat()
{
	cout << "QV Dau linh\t\t";
	QuaiVat::xuat();
}