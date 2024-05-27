#pragma once
#include "Basic.h"
#include "NonMember.h"
#include "Premium.h"
class KhachHang
{
private:
	string tenKH, soCCCD;
	int tgsdDV; // theo thang
	GoiDV* pGoiDV;
public:
	KhachHang();
	KhachHang(const KhachHang& a);
	~KhachHang();
	void Nhap();
	string tostring();

	int TinhtongChi();
};

