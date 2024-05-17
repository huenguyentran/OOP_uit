#pragma once
#include "game.h"

class NhanVat
{
private:
	string tenNV;
	int monPhai, heNV;
	int capDo, satThuong;
public:
	int tinh_sat_thuong();
	int he() { return heNV; }
	void nhap();
	void xuat();
};

