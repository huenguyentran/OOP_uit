#pragma once
#include "DongCo.h"

class DongCoA:public DongCo
{
	double donGia;
public:
	DongCoA() { donGia = 500; };
	double DonGia() { return donGia; }
	void Xuat();
	string tostring();
};

