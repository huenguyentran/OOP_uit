#pragma once
#include "header.h"
class PhanLoaiRh
{
protected:
	string phanloai;
public:
	string PhanLoai() { return phanloai; }
	virtual bool CoTheCho(PhanLoaiRh* a) = 0;
};

