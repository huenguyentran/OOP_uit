#pragma once
#include "header.h"

#include "HeKim.h"
#include "HeMoc.h"
#include "HeThuy.h"
#include "HeHoa.h"
#include "HeTho.h"

class PhanTu
{
protected:
	string ten;
	int capDo;
	NguHanh* hanh;
public:
	PhanTu();
	virtual void nhap();
	virtual string tostring();

	virtual double SatThuong() = 0;
	double tanCong(PhanTu& a);
};

