#pragma once
#include "header.h"
class DongCo
{
private:
	string maSo, hangSanXuat;
public:
	virtual void Nhap();
	virtual double DonGia() = 0;
	virtual void Xuat();
	virtual string tostring();
};

