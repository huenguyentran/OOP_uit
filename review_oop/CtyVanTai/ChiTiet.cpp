#include "ChiTiet.h"
void ChiTiet::Nhap()
{
	cout << "Nhap ma so: ";
	cin >> maSo;
	cout << "Nhap hang san xuat: ";
	cin.ignore();
	getline(cin, hangSanXuat);
}

void ChiTiet::Xuat()
{
	cout << "Ma so: " << maSo << "\tHang san xuat: " << hangSanXuat << "\t";
}

string ChiTiet::tostring()
{
	stringstream s;
	s << "Ma so: " << maSo << "\tHang san xuat: " << hangSanXuat << "\t";
	return s.str();
}