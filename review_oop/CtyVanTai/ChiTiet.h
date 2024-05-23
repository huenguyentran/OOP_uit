#pragma once
#include "header.h"
class ChiTiet
{
private:
	string maSo, hangSanXuat;
protected:
	double donGia;
	int loai;
public:
	virtual void Nhap();
	double DonGia() { return donGia; }
	virtual void Xuat();
	virtual string tostring();
};

