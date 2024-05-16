#pragma once
#include "TuGiac.h"
class HinhBinhHanh:public TuGiac
{
public:
	HinhBinhHanh();
	~HinhBinhHanh();

	virtual void nhap();
	virtual void xuat();
	bool la_hbh();
};

