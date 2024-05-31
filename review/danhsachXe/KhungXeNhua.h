#pragma once
#include "KhungXe.h"
class KhungXeNhua :public KhungXe
{
private:
	double donGia;
public:
	KhungXeNhua();
	void Xuat();
	string tostring();
	double DonGia();
};


