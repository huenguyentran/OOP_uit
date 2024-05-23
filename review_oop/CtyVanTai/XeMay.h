#pragma once
#include "DongCo.h"
#include "BanhXe.h"
#include "KhungXe.h"

class XeMay
{
private:
	string maSoXe;
	double donGiaXe;
	DongCo dongCo;
	BanhXe banhXe;
	KhungXe khungXe;
public:
	void nhaptt();

	double TinhDonGia();
	
	void xuattt();

	string tostring();
	//virtual void GhiTT() = 0;

};

