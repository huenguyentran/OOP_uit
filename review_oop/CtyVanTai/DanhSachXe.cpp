#include "DanhSachXe.h"

DanhSachXe::DanhSachXe() { pDsXeMay = NULL; }
DanhSachXe::~DanhSachXe()
{
	for (int i = 0; i < soLuong; i++)
		delete pDsXeMay[i];
	delete[] pDsXeMay;
}
void DanhSachXe::input()
{
	if (pDsXeMay != NULL)
	{
		for (int i = 0; i < soLuong; i++)
			delete pDsXeMay[i];
		delete[] pDsXeMay;
	}


	cout << "Nhap so luong xe: ";
	cin >> soLuong;
	pDsXeMay = new XeMay * [soLuong];
	for (int i = 0; i < soLuong; i++)
	{
		cout << "-- NHAP XE MAY THU " << i + 1 << "--\n";
		pDsXeMay[i] = new XeMay;
		pDsXeMay[i]->nhaptt();
	}
}

void DanhSachXe::output()
{
	for (int i = 0; i < soLuong; i++)
	{
		pDsXeMay[i]->xuattt();
	}
}

void DanhSachXe::ghiDS(ofstream& file)
{
	for (int i = 0; i < soLuong; i++)
	{
		file << pDsXeMay[i]->tostring();
	}
}
