#include "NguHanh.h"
NguHanh::NguHanh() { hanh = ""; }
string NguHanh::Xuat()
{
	return hanh;
}

double NguHanh::mucSatThuong(NguHanh& other)
{// khi a-->b(other)
	if (this->TuongSinh() == other.hanh)
	{
		return 1.1;
	}
	else if (this->TuongKhac() == other.hanh)
	{
		return 1.2;
	}
	else if (other.TuongKhac() == this->hanh)
	{
		return 0.8;
	}
	return 1;
}