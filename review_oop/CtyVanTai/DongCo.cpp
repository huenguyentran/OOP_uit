#include "DongCo.h"
DongCo::DongCo() { tieuChuan = 0; }
void DongCo::Nhap()
{
	ChiTiet::Nhap();
	do
	{
		cout << "Nhap loai dong co: 0_A 1_B 2_C: ";
		cin >> loai;
		if (loai == DCB)
		{
			do
			{
				cout << "Nhap tieu chuan: 1_tc 1 2_tc2 3_tc3 ";
				cin >> tieuChuan;
			} while (tieuChuan != TC1 && tieuChuan != TC2 && tieuChuan != TC3);
			if (tieuChuan = TC1) donGia = 600;
			else if (tieuChuan = TC2) donGia = 700;
			else donGia = 800;
		}
	} while (loai != DCA && loai != DCB && loai != DCC);

	if (loai = DCA) donGia = 500;
	else donGia = 400; // loai c
}

void DongCo::Xuat()
{
	ChiTiet::Xuat();
	cout << "loai dong co: ";
	switch (loai)
	{
	case DCA:
		cout << "loai A \n";
		break;
	case DCB:
		cout << "laoi B";
		if (tieuChuan == TC1) cout << " TC1 \n";
		else if (tieuChuan == TC2) cout << "TC2 \n";
		else cout << "TC3 \n";
		break;
	case DCC:
		cout << "loai C\n";
		break;
	default:
		cout << "error";
		break;
	}
	cout << "Don gia: " << donGia << "\n";
}

string DongCo::tostring()
{
	stringstream s;
	s << ChiTiet::tostring();
	s << "loai dong co: ";
	switch (loai)
	{
	case DCA:
		s << "loai A \n";
		break;
	case DCB:
		s << "laoi B";
		if (tieuChuan == TC1) s << " TC1 \n";
		else if (tieuChuan == TC2) s << "TC2 \n";
		else s << "TC3 \n";
		break;
	case DCC:
		s << "loai C\n";
		break;
	default:
		s << "error";
		break;
	}
	s << "Don gia: " << donGia << "\n";
	return s.str();
}