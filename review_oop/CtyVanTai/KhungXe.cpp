#include "KhungXe.h"

void KhungXe::Nhap()
{
	ChiTiet::Nhap();
	do {
		cout << "Loai khung 0_Nhom, 1_Nhua: ";
		cin >> loai;

	} while (loai != KHUNGNHOM && loai != KHUNGNHUA);

	if (loai == KHUNGNHOM) donGia = 500;
	else donGia = 200;
}

void KhungXe::Xuat()
{
	ChiTiet::Xuat();
	cout << "Loai khung xe: ";
	if (loai == KHUNGNHUA) cout << "khung nhua \n";
	else cout << "khung nhom \n";
	cout << "Don gia: " << donGia << "\n";
}

string KhungXe::tostring()
{
	stringstream s;
	s << ChiTiet::tostring();
	s << "Loai khung xe: ";
	if (loai == KHUNGNHUA) s << "khung nhua \n";
	else s << "khung nhom \n";
	s << "Don gia: " << donGia << "\n";
	return s.str();
}