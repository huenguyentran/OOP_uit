#pragma once
#include "ConVat.h"
class Buom : public ConVat
{
private:
	int t1, t2, t3, t4;
public:
	void nhap();
	void xuat();
	string loai() { return "BUOM"; }
	bool dungQL();
};

