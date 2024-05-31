#pragma once
#include "header.h"
class KhungXe
{
private:
	string maSo, hangSanXuat;
protected:
	double donGia;
public:
	void Nhap();
	virtual void Xuat();
	virtual string tostring();
	virtual double DonGia() = 0;
};

