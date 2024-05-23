#include "KhungXeNhua.h"

KhungXeNhua::KhungXeNhua()
{
	donGia = 200;
}
void KhungXeNhua::Xuat()
{
	KhungXe::Xuat();
	cout << "Loai khung: khung nhom" << "\tDon gia: " << donGia << "\n";
}
string KhungXeNhua::tostring()
{
	stringstream s;
	s << KhungXe::tostring();
	s << "Loai khung: khung nhom" << "\tDon gia: " << donGia << "\n";
	return s.str();
}

double KhungXeNhua::DonGia() {
	return donGia;
}