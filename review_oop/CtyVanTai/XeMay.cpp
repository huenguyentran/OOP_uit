#include "XeMay.h"
void XeMay::nhaptt()
{
	cout << "Nhap ma so xe: ";
	cin >> maSoXe;
	cout << "Nhap thong tin dong co\n";
	dongCo.Nhap();
	cout << "Nhap thong tin banh xe\n";
	banhXe.Nhap();
	cout << "Nhap thong tin khung xe\n";
	khungXe.Nhap();
}

double XeMay::TinhDonGia()
{
	return donGiaXe = dongCo.DonGia() + banhXe.DonGia() + khungXe.DonGia();
}

void XeMay::xuattt()
{
	cout << "XUAT TT 1 XE:\n";
	cout << "ma so xe :" << maSoXe << "\n";
	cout << "DONG CO\n";
	dongCo.Xuat();
	cout << "BANH XE\n";
	banhXe.Xuat();
	cout << "KHUNG XE\n";
	khungXe.Xuat();
	cout << "DON GIA: " << TinhDonGia();
}

string XeMay::tostring()
{
	stringstream s;
	s << "XUAT TT 1 XE:\n";
	s << "ma so xe :" << maSoXe << "\n";
	s << "DONG CO\n" << dongCo.tostring();
	s << "BANH XE\n" << banhXe.tostring();
	s << "KHUNG XE\n" << khungXe.tostring();
	s << "DON GIA: " << TinhDonGia();
	return s.str();
}