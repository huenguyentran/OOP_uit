#pragma once
#include "HinhChuNhat.h"

class HinhVuong:public HinhChuNhat
{
public:
	HinhVuong();
	~HinhVuong();

	void nhap();
	void xuat();
	bool la_hv();
};

