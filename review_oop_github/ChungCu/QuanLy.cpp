#include "QuanLy.h"
void QuanLy::nhap()
{
	cout << "nhap so luong chung cu: ";
	cin >> so_luong;
	pchungCu.resize(so_luong);
	int chon;
	for (int i = 0; i < so_luong; i++)
	{
		cout << "nguoi so huu: 1_Vinhomes, 2_Bcons: ";
		cin >> chon;
		switch (chon)
		{
		case 1:
			pchungCu[i] = new CCVinHome;
			break;
		case 2:
			pchungCu[i] = new CCBcon;
			break;
		default:
			cout << "nhap lai i: ";
			i--;
			continue;
		}
		pchungCu[i]->nhap();
	}
}


void QuanLy::xuat()
{
	for (int i = 0; i < so_luong; i++)
	{
		cout << pchungCu[i]->guithongbao() << "\n";
	}
}
int QuanLy::tinhTien()
{
	int sum = 0;
	for (int i = 0; i < so_luong; i++)
	{
		sum += pchungCu[i]->tienphong();
	}
	return sum;
}
