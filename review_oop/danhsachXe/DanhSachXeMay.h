#pragma once
#include "XeMay.h"
class DanhSachXeMay
{
	XeMay* pDsXeMay;
	int soLuong;
public:
	DanhSachXeMay();
	~DanhSachXeMay();
	void input();
	void output();
	void ghiDS(ofstream& file);
};

