#include "TapTinHinhAnh.h"

void TapTinHinhAnh::nhaptaiNguyen()
{
	TaiNguyen::nhaptaiNguyen();
	cout << "Nhap chieu dai, chieu rong buc anh: ";
	cin >> chieuDai >> chieuRong;
}

string TapTinHinhAnh::HienThi()
{
	stringstream s;
	s << "File: Image\n";
	s << TaiNguyen::HienThi();
	return s.str();
}

string TapTinHinhAnh::loaiTaiNguyen()
{
	return "HINHANH";
}
