#pragma once
#include "game.h"

class QuaiVat
{
protected:
	string tenQV;
	int satThuong;
	int capDo;
	int heQV;
public:

	virtual int tinh_sat_thuong() = 0;
	int he() { return heQV; }
	void nhap();
	void xuat();
};

