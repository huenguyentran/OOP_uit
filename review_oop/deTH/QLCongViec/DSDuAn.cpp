#include "DSDuAn.h"

void DSDuAn::nhapDsDuAn()
{
	cout << "Nhap so luong du an: ";
	cin >> soluongDuAn;
	vdsDuAn.resize(soluongDuAn);
	for (int i = 0; i < soluongDuAn; i++)
	{
		cout << "Nhap du an thu " << i + 1 << "\n";
		vdsDuAn[i].nhap();
	}
}

void DSDuAn::nhieuTNHinhAnh()
{
	int temp = 0, soTaiNguyen = vdsDuAn[temp].slTaiNguyenHinhAnh();
	for (int i = 1; i < vdsDuAn.size(); i++)
	{
		if (soTaiNguyen < vdsDuAn[i].slTaiNguyenHinhAnh())
		{
			temp = i;
			soTaiNguyen = vdsDuAn[i].slTaiNguyenHinhAnh();
		}
	}

	cout << "Du an su dung nhieu tai nguyen dang hinh anh nhat \n";
	cout << vdsDuAn[temp].toString();
}

void DSDuAn::luuTT()
{
	for (int i = 0; i < vdsDuAn.size(); i++)
	{
		vdsDuAn[i].Export();
	}
}
