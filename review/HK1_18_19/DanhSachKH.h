#pragma once
#include "KhachHang.h"
class DanhSachKH
{
private:
	vector <KhachHang> vDSKhachHang;
	int n;
public:
	void NhapDS();
	void ghiDS(fstream& file);

	void KhachHangChiTieuNhieu();
};

