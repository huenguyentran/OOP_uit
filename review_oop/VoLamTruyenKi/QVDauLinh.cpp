#include "QVDauLinh.h"
double QVDauLinh::SatThuong()
{
	return capDo * 7;
}

string QVDauLinh::tostring()
{
	stringstream s;
	s << "QV Dau Linh: " << PhanTu::tostring() << "\n";
	return s.str();
}