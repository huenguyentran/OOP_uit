#pragma once
#include "GoiDV.h"
class Premium:public GoiDV
{
	int solopDK;
	bool dvXongHoi, dvPT;
public:
	Premium();
	void Nhap();
	void Xuat();
	int phi1Thang();
};

