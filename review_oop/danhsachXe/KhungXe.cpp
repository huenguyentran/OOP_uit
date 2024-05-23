#include "KhungXe.h"
void KhungXe::Nhap()
{
	cout << "Nhap ma so: ";
	cin >> maSo;
	cout << "Nhap hang san xuat: ";
	cin.ignore();
	getline(cin, hangSanXuat);
}
void KhungXe::Xuat()
{
	cout << "Ma so: " << maSo << "\tHang san xuat: " << hangSanXuat << "\t";
}
string KhungXe::tostring()
{
	stringstream s;
	s << "Ma so: " << maSo << "\tHang san xuat: " << hangSanXuat << "\t";
	return s.str();
}