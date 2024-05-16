#include "DanhSach.h"

DanhSach::DanhSach() 
{
	dsSach.resize(0);
}
DanhSach::~DanhSach()
{
	for (int i = 0; i < dsSach.size(); i++)
		if(dsSach[i] != NULL)
			delete dsSach[i];
	dsSach.resize(0);
}

void DanhSach::nhapDS()
{
	cout << "--Nhap danh sach--\n";
	Sach* temp = NULL;
	int chon = 0;
	while (chon != 4)
	{
		cout << "1_SGK\n"
			<< "2_Tap Chi\n"
			<< "3_Tieu thuyet\n"
			<< "4_Nhap xong\n---------\n";
		cin >> chon;
		switch (chon)
		{
		case 1:
			temp = new SGK;
			temp->nhap();
			dsSach.push_back(temp);
			temp = NULL;
			break;
		case 2:
			temp = new TapChi;
			temp->nhap();
			dsSach.push_back(temp);
			temp = NULL;
			break;
		case 3:
			temp = new TieuThuyet;
			temp->nhap();
			dsSach.push_back(temp);
			temp = NULL;
			break;
		default:
			break;
		}
	}
}

void DanhSach::xuatDS()
{
	int size = dsSach.size();
	for (int i = 0; i < size; i++)
		dsSach[i]->xuat();
}