#pragma once
#include "KhachHang.h"
#include <vector>
class TrungTam
{
private:
	vector<KhachHang> vKH;
	int soLuong;
public:
	void Nhap();
	void Xuat();
	void ChiTieuNhieu();
};

