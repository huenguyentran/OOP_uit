#pragma once
#include "ConVat.h"
class Muoi : public ConVat
{
	int t1, t2, t3, t4;
public:
	void nhap();
	void xuat();
	string loai() { return "MUOI"; }
	bool dungQL();
};

