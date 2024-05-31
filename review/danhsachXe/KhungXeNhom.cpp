#include "KhungXeNhom.h"

KhungXeNhom::KhungXeNhom()
{
	donGia = 500;
}
void KhungXeNhom::Xuat()
{
	KhungXe::Xuat();
	cout << "Loai khung: khung nhom" << "\tDon gia: " << donGia << "\n";
}
string KhungXeNhom::tostring()
{
	stringstream s;
	s << KhungXe::tostring();
	s << "Loai khung: khung nhom" << "\tDon gia: " << donGia << "\n";
	return s.str();
}

double KhungXeNhom::DonGia() {
	return donGia;
}