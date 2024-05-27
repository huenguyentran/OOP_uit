#pragma once
#include "DVDiKem.h"
class DVLopHoc:public DVDiKem
{
private:
	string tenLopHoc;
public:
	DVLopHoc();
	DVLopHoc(int);

	string tostring();
};

