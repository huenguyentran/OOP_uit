#pragma once
#include "PhanTu.h"

class NguoiChoi:public PhanTu
{
private:
	string monPhai;
public:
	void nhap();
	double SatThuong();
	string tostring();
};

