#include "DanhSachNV.h"
DanhSachNV::DanhSachNV()
{
	danhSach.resize(0);
}
void DanhSachNV::input()
{
	int temp = 0;
	do
	{
		cout << "1_Nhap mot nhan vat, 2_thoat nhap: ";
		cin >> temp;
		if (temp == 2) return;
		
		PhanTu* p = NULL;
		cout << "1_Quai vat, 2_nguoi choi: ";
		cin >> temp;
		if (temp == 1)
		{
			cout << "1_Thong thuong, 2_Dau linh: ";
			cin >> temp;
			if (temp == 1)
				p = new QVThongThuong;
			else if (temp == 2)
				p = new QVDauLinh;
		}
		else if (temp == 2)
			p = new NguoiChoi;

		if (p != NULL)
		{
			p->nhap();
			danhSach.push_back(p);
		}

	} while (1);
}

void DanhSachNV::ghi(fstream& file)
{
	for (PhanTu* p : danhSach)
		file << p->tostring();
}

void DanhSachNV::TuongTac()
{
	int i1, i2;
	cout << "Nhap so thu tu cua A: ";
	cin >> i1;
	cout << "Nhap so thu tu cua B: ";
	cin >> i2;
	if (i1 == i2)
	{
		cout << "iA == iB";
		return;
	}

	cout << "A tan cong B: " << danhSach[i1]->tanCong(*danhSach[i2]) << " sat thuong\n" << "\n";
	cout << "B tan cong A: " << danhSach[i2]->tanCong(*danhSach[i1]) << " sat thuong\n" << "\n";
}

void DanhSachNV::KeManh(fstream& file)
{
	vector <int> temp;
	temp.resize(0);
	double val = 0;
	for (int i = 0; i < danhSach.size(); i++)
	{
		if (danhSach[i]->SatThuong() == val)
			temp.push_back(i);
		else if (danhSach[i]->SatThuong() > val)
		{
			temp.resize(0);
			temp.push_back(i);
			val = danhSach[i]->SatThuong();
		}
	}

	file << "--KE MANH NHAT--\n";
	for (int i = 0; i < temp.size(); i++)
	{
		file << danhSach[i]->tostring();
	}
}
