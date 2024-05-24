#pragma once
#include "ManhDon.h"
class BanCo
{
private:
	char banCO[8][10];
public:
	BanCo();
	void xuat();
	bool DatManhVaoBanCo(ManhDon* p); // x, y laf toa do 2 diem chen vao

	void KetQua(int& soOGach, int& soCotLapDay);
};

