#include "BanhXe.h"
void BanhXe::Nhap()
{
	ChiTiet::Nhap();
	do
	{
		cout << "Nhap loai banh xe: 0_D 1_E: ";
		cin >> loai;
	} while (loai != BANHD && loai != BANHE);
	if (loai == BANHD) donGia = 400;
	else donGia = 300;
}

void BanhXe::Xuat()
{
	ChiTiet::Xuat();
	cout << "Loai banh xe: ";
	if (loai == BANHD) cout << "loai d\n";
	else cout << "loai E\n";
	cout << "Don gia: " << donGia << "\n";
}

string BanhXe::tostring()
{
	stringstream s;
	s << ChiTiet::tostring();
	s << "Loai banh xe: ";
	if (loai == BANHD) s << "loai d\n";
	else s << "loai E\n";
	s << "Don gia: " << donGia << "\n";
	return s.str();
}