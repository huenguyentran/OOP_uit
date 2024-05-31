#pragma once
#include "KhungXe.h"
class KhungXeNhom:public KhungXe
{
private:
	double donGia;
public:
	KhungXeNhom();
	void Xuat();
	string tostring();
	double DonGia();
};

