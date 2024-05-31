#include "QVThongThuong.h"
double QVThongThuong::SatThuong()
{
	return capDo * 3;
}

string QVThongThuong::tostring()
{
	stringstream s;
	s << "QV Thong Thuong: " << PhanTu::tostring() << "\n";
	return s.str();
}