#pragma once
#include "ChungCu.h"
#include "CCBcon.h"
#include "CCVinHome.h"
#include <vector>
class QuanLy
{
private:
	vector <ChungCu*> pchungCu;
	int so_luong;
public:
	QuanLy() { pchungCu.resize(0); }
	~QuanLy()
	{
		for (int i = 0; i < pchungCu.size(); i++)
			delete pchungCu[i];
		pchungCu.resize(0);
	}

	void nhap();
	void xuat();

	int tinhTien();

};

