#pragma once
#include "ConVat.h"
class Ech : public ConVat
{
	int t1, t2, t3, t4, t5;
public:
	void nhap();
	void xuat();
	string loai() { return "ECH"; }
	bool dungQL();
};

