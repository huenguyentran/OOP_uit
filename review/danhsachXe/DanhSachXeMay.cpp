#include "DanhSachXeMay.h"
DanhSachXeMay::DanhSachXeMay()
{
	pDsXeMay = NULL;
}
DanhSachXeMay::~DanhSachXeMay()
{
	delete[] pDsXeMay;
}
void DanhSachXeMay::input()
{
	if (pDsXeMay != NULL)
	{
		delete[] pDsXeMay;
	}


	cout << "Nhap so luong xe: ";
	cin >> soLuong;
	pDsXeMay = new XeMay [soLuong];
	for (int i = 0; i < soLuong; i++)
	{
		cout << "-- NHAP XE MAY THU " << i + 1 << "--\n";
		pDsXeMay[i].nhaptt();
	}
}
void DanhSachXeMay::output()
{
	for (int i = 0; i < soLuong; i++)
	{
		pDsXeMay[i].xuattt();
	}

}
void DanhSachXeMay::ghiDS(ofstream& file)
{
	for (int i = 0; i < soLuong; i++)
	{
		file << pDsXeMay[i].tostring();
	}
}