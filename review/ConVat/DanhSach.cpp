#include "DanhSach.h"
DanhSach::DanhSach()
{
	pConVat = NULL;
}
DanhSach::~DanhSach()
{
	for (int i = 0; i < so_luong; i++)
	{
		delete pConVat[i];
	}
	delete pConVat;
	pConVat = NULL;
}
void DanhSach::input()
{
	cout << "Nhap so luong con vat: ";
	cin >> so_luong;
	int chon;
	pConVat = new ConVat * [so_luong];

	for (int i = 0; i < so_luong; i++)
	{
		cout << "0_Muoi, 1_Ech, 2_Buom: ";
		cin >> chon;
		switch (chon)
		{
		case 0:
			pConVat[i] = new Muoi;
			break;
		case 1:
			pConVat[i] = new Ech;
			break;
		case 2:
			pConVat[i] = new Buom;
			break;
		default:
			i--;
			continue;
		}
		pConVat[i]->nhap();
	}
}
void DanhSach::khongtheoQl()
{
	cout << "Cac con vat khong theo quy luat la: \n";
	for (int i = 0; i < so_luong; i++)
	{
		if (!pConVat[i]->dungQL())
			pConVat[i]->xuat();
	}
	cout << "\n";
}
bool DanhSach::co_dadangST()
{
	bool muoi = 0, ech = 0, buom = 0;
	int i = 0;
	while (i <= so_luong)
	{
		if (pConVat[i]->loai() == "MUOI") 
			muoi = true;
		else if (pConVat[i]->loai() == "ECH") 
			ech = true;
		else if (pConVat[i]->loai() == "BUOM") 
			buom = true;
		i++;
	}
	if (muoi && ech && buom)
	{
		cout << "CO DA DANG SINH THAI!!";
		return 1;
	}
	cout << "KHONG CO DA DANG SINH THAII!!";
	return 0;
}