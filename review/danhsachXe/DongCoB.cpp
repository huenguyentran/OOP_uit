#include "DongCoB.h"
void DongCoB::Nhap()
{
	DongCo::Nhap();
	do
	{
		cout << "Nhap tieu chuan: 1_tc 1 2_tc2 3_tc3 ";
		cin >> tieuChuan;
	} while (tieuChuan != 1 && tieuChuan != 2 && tieuChuan != 3);
}

double DongCoB::DonGia() 
{
	if (tieuChuan == 1) donGia = 600;
	else if (tieuChuan == 2) donGia = 700;
	else donGia = 800;
	return donGia;
}
void DongCoB::Xuat()
{
	DongCo::Xuat();
	cout << "loai b: " << "\tTieu chuan: " << tieuChuan << "\t Don gia: " << DonGia() << "\n";
}
string DongCoB::tostring()
{
	stringstream s;
	s << DongCo::tostring();
	s << "loai b: " << "\tTieu chuan: " << tieuChuan << "\t Don gia: " << DonGia() << "\n";
	return s.str();
}