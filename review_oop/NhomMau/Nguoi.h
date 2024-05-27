#pragma once
#include "NhomMau.h"
class Nguoi
{
private:
	string ten;
	NhomMau nhomMau;
public:
	void nhap();
	string tostring();
	bool DiTruyen(Nguoi cha, Nguoi me);
	bool CoTheChoMau(Nguoi* other);
};

