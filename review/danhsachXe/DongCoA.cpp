#include "DongCoA.h"
void DongCoA::Xuat()
{
	DongCo::Xuat();
	cout << "loai dong co: A\t" << "Don gia: " << donGia << "\n";
}
string DongCoA::tostring()
{
	stringstream s;
	s << DongCo::tostring();
	s << "loai dong co: A \t" << "Don gia: " << donGia << "\n";
	return s.str();
}