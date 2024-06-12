#pragma once
#include <iostream>
using namespace std;

class GoiDV
{
protected:
	int phiCB;
public:
	virtual void Nhap() = 0;
	virtual void Xuat() = 0;
	virtual int phi1Thang() = 0;
};

