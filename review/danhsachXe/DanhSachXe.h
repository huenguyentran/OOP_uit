#pragma once
#include "XeMay.h"
class DanhSachXe
{
	XeMay** pDsXeMay;
	int soLuong;
public:
	DanhSachXe();
	~DanhSachXe();
	void input();
	void output();
	void ghiDS(ofstream& file);
};

