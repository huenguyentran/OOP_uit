#include "TrungTam.h"

void TrungTam::Nhap()
{
	cout << "Nhap so khach hang: "; cin >> soLuong;
	vKH.resize(soLuong);
	int i = 0;
	for (auto x : vKH)
	{
		cout << "Nhap khach hang thu " << i++ << endl;
		x.Nhap();
	}
}

void TrungTam::Xuat()
{
	for (auto x : vKH)
		x.Xuat();
}

void TrungTam::ChiTieuNhieu()
{
	vector<int> tam;
	tam.resize(0);
	for (int i = 0; i < soLuong; i++)
	{
		if (vKH[i].chiTieu() > vKH[tam[0]].chiTieu())
		{
			tam.resize(0);
			tam.push_back(i);
		}
		else if (vKH[i].chiTieu() == vKH[tam[0]].chiTieu())
			tam.push_back(i);
	}

	cout << "Nhung khach hang tieu nhieu nhat\n";
	for (auto x : tam)
		vKH[x].Xuat();
}
