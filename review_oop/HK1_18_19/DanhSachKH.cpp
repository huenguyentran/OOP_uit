#include "DanhSachKH.h"
void DanhSachKH::NhapDS()
{
	cout << "So luong khach hang: ";
	cin >> n; 
	vDSKhachHang.resize(n);
	for (int i = 0; i < n; i++)
	{
		vDSKhachHang[i].Nhap();
	}
}
void DanhSachKH::ghiDS(fstream& file)
{
	if (!file) return;
	file << "DANH SACH KHACH HANG\n";
	for (int i = 0; i < n; i++)
	{
		file << vDSKhachHang[i].tostring();
	}
}

void DanhSachKH::KhachHangChiTieuNhieu()
{
	vector <int> c = { 0 };
	for (int i = 0; i < n; i++)
	{
		if (vDSKhachHang[c[0]].TinhtongChi() < vDSKhachHang[i].TinhtongChi())
		{
			c.resize(0);
			c.push_back(i);
		}
		else if (vDSKhachHang[c[0]].TinhtongChi() < vDSKhachHang[i].TinhtongChi())
			c.push_back(i);
	}
	cout << "KHACH HANG CO CHI TIEU CAO \n";
	for (int i = 0; i < c.size(); i++)
	{
		cout << vDSKhachHang[c[i]].tostring();
	}
}