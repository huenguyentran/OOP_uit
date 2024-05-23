#pragma once
#include "DongCo.h"
class DongCoB:public DongCo
{
private:
	double donGia;
	int tieuChuan;
public:
	double DonGia();
	void Nhap();
	void Xuat();
	string tostring();
};

