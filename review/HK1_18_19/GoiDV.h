#pragma once
#include "header.h"
#include "DVHoTroPT.h"
#include "DVXongHoi.h"
#include "DVLopHoc.h"

class GoiDV
{
protected:
	int phiCoBan;
	vector <DVDiKem*> pCacDV;
	int tongTien;
public:
	virtual void nhap() = 0;
	virtual string tostring();
	int TongTienCuaGoi();

};

