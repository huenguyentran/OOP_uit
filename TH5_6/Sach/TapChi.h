#pragma once
#include "sach.h"
class TapChi:public Sach
{
private:
	std::string dang_tap_chi;
public:
	TapChi();
	~TapChi();

	void nhap();
	void xuat();
};

