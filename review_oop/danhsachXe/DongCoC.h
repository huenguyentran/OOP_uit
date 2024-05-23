#pragma once
#include "DongCo.h"
class DongCoC:public DongCo
{
	double donGia;
public:
	DongCoC();
	double DonGia() { return donGia; }
	void Xuat();
	string tostring();
};

