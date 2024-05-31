#pragma once
#include "GoiDV.h"
class Premium:public GoiDV
{
	int chiphiLopHoc;
	int dvXongHoi;
	int hotroPT;
public:
	Premium();
	void nhap();

	string tostring();
};

