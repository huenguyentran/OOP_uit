#pragma once
#include "header.h"
#include "ChiTiet.h"
class DongCo : public ChiTiet
{
protected:
	int tieuChuan;
public:
	DongCo();
	void Nhap();
	void Xuat();
	string tostring();

};
