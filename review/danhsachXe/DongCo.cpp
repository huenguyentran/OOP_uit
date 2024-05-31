#include "DongCo.h"

void DongCo::Nhap()
{
	cout << "Nhap ma so: ";
	cin >> maSo;
	cout << "Nhap hang san xuat: ";
	cin.ignore();
	getline(cin, hangSanXuat);
}

void DongCo::Xuat()
{
	cout << "Ma so: " << maSo << "\tHang san xuat: " << hangSanXuat << "\t";
}

string DongCo::tostring()
{
	stringstream s;
	s << "Ma so: " << maSo << "\tHang san xuat: " << hangSanXuat << "\t";
	return s.str();
}