#include "DanhSach.h"

DanhSach::DanhSach()
{
	dsNhomNguoi.resize(0);
}
DanhSach::~DanhSach()
{
	for (int i = 0; i < dsNhomNguoi.size(); i++)
		delete dsNhomNguoi[i];
	dsNhomNguoi.resize(0);
}
void DanhSach::nhapNhomNguoi()
{
	int temp;
	do
	{
		cout << "1_Nhap 1 nguoi, 2_thoat nhap: ";
		cin >> temp;
		if (temp == 1)
		{
			Nguoi* a = new Nguoi;
			a->nhap();
			dsNhomNguoi.push_back(a);
		}
	} while (temp != 2);
}
void DanhSach::kiemtraDiTruyen()
{
	int con, cha, me;
	cout << "Nhap stt nguoi con: ";
	cin >> con;
	cout << "Nhap stt nguoi cha: ";
	cin >> cha;
	cout << "Nhap stt nguoi me: ";
	cin >> me;

	if (dsNhomNguoi[con]->DiTruyen(*dsNhomNguoi[cha], *dsNhomNguoi[me]))
		cout << "Dung quy luat di truyen\n";
	else cout << "Khong dung quy luat di truyen\n";
}
void DanhSach::timNguoiChoMau(fstream& file)
{
	int temp;
	cout << "Nhap stt cua nguoi X: ";
	cin >> temp;
	file << "Danh sach nguoi cho mau\n";

	for (int i = 0; i < dsNhomNguoi.size(); i++)
	{
		if (dsNhomNguoi[i]->CoTheChoMau(dsNhomNguoi[temp]))
			file << dsNhomNguoi[i]->tostring();
	}
}

void DanhSach::ghi(fstream& file)
{
	file << "Danh sach: \n";
	for (Nguoi* p : dsNhomNguoi)
		file << p->tostring();
	file << "-----------------------\n";
}
