#pragma once
#include "header.h"
class NguHanh
{
protected:
	string hanh;
public:
	NguHanh();
	virtual string TuongSinh() = 0;
	virtual string TuongKhac() = 0;
	string Xuat();

	double mucSatThuong(NguHanh& other);
};
