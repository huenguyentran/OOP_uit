#pragma once
#include "HinhBinhHanh.h"
class HinhChuNhat:public HinhBinhHanh
{
public:
	HinhChuNhat();
	~HinhChuNhat();

	virtual void nhap();
	virtual void xuat();
	bool la_hcn();
};

