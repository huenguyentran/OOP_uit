#include "DVHoTroPT.h"
DVHoTroPT::DVHoTroPT() {}
DVHoTroPT::DVHoTroPT(int a)
{
	phiDV = a;
}

string DVHoTroPT::tostring()
{
	stringstream s;
	s << "DV Ho tro PT \t\t" << DVDiKem::tostring();
	return s.str();
}