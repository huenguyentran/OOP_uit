#pragma once
#include "header.h"

#include "DongCoA.h"
#include "DongCoB.h"
#include "DongCoC.h"

#include "BanhXeD.h"
#include "BanhXeE.h"

#include "KhungXeNhom.h"
#include "KhungXeNhua.h"

class XeMay
{
private:
	DongCo* dongCo;
	BanhXe* banhXe;
	KhungXe* khungXe;
	string maSoXe;
	double donGiaXe;
public:
	XeMay();
	XeMay(const XeMay& other);
	~XeMay();
	void nhaptt();

	double TinhDonGia();

	void xuattt();

	string tostring();
};

