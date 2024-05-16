#include "NVVANPHONG.h"
#include "NVSANXUAT.h"
#include "NHANVIEN.h"
#include <fstream>

using namespace std;

int main()
{
	NHANVIEN** danh_sach;
	int so_nv;
	cout << "nhap so nhan vien: ";
	cin >> so_nv;
	danh_sach = new NHANVIEN * [so_nv];
	int chon = 0;
	for (int i = 0; i < so_nv; i++)
	{
		cout << "1_nv van phong, 2_nv san xuat: ";
		cin >> chon;
		switch (chon)
		{
		case 1:
			danh_sach[i] = new NVVANPHONG;
			break;
		case 2:
			danh_sach[i] = new NVSANXUAT;
			break;
		default:
			return 0;
		} 
		danh_sach[i]->nhaptt();
	}

	ofstream out("dsnv.txt");
	if (!out)
		return 1;

	out << "------danh sach nhan vien------\n";

	for (int i = 0; i < so_nv; i++)
	{
		danh_sach[i]->tinh_luong();
		out << danh_sach[i]->tostring();
	}

	out.close();

	return 0;
}