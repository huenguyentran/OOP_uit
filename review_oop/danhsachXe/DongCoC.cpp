#include "DongCoC.h"

DongCoC::DongCoC()
{
	donGia = 400;
}
void DongCoC::Xuat()
{
	DongCo::Xuat();
	cout << "loai dong co: C\t" << "Don gia: " << donGia << "\n";
}
string DongCoC::tostring()
{
	stringstream s;
	s << DongCo::tostring();
	s << "loai dong co: C\t" << "Don gia: " << donGia << "\n";
	return s.str();
}