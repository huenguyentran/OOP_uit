#include "DVXongHoi.h"
DVXongHoi::DVXongHoi() {}
DVXongHoi::DVXongHoi(int a)
{
	phiDV = a;
}

string DVXongHoi::tostring()
{
	stringstream s;
	s << "DV Xong hoi \t\t" << DVDiKem::tostring();
	return s.str();
}