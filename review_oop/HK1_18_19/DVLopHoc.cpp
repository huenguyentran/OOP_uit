#include "DVLopHoc.h"
DVLopHoc::DVLopHoc() {}
DVLopHoc::DVLopHoc(int a)
{
	cout << "Nhap ten lop hoc: ";
	cin.ignore();
	getline(cin, tenLopHoc);
	this->phiDV = a;
}

string DVLopHoc::tostring()
{
	stringstream s;
	s << "DV lop hoc: " << tenLopHoc << "\t\t" << DVDiKem::tostring();
	return s.str();
}