#include "GoiDV.h"
string GoiDV::tostring()
{
	stringstream s;
	for (int i = 0; i < pCacDV.size(); i++)
		s << pCacDV[i]->tostring();
	return s.str();
}

int GoiDV::TongTienCuaGoi()
{
	tongTien = phiCoBan;
	for (int i = 0; i < pCacDV.size(); i++)
	{
		tongTien += pCacDV[i]->PhiDV();
	}
	return tongTien;
}