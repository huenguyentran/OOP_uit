#include "DuAn.h"

void DuAn::nhap()
{
	int temp;
	cout << "chon Exeporter:\n";
	do
	{
		cout << "1_AExporter, 2_BExporter: ";
		cin >> temp;
		if (temp == 1)
			exporter = new AExporter;
		else if (temp == 2)
			exporter = new BExporter;
	} while (temp != 1 && temp != 2);
	cout << "Nhap ma du an: ";
	cin >> maDAn;
	cout << "Nhap ten du an: ";
	cin.ignore();
	getline(cin, ten);
	cout << "Nhap mo ta du an: ";
	cin.ignore();
	getline(cin, moTa);
	cout << "Nhap thong tin nguoi quan tri: \n";
	nguoiQuanTri.setvaiTro("nguoi quan tri");
	nguoiQuanTri.nhapttuser();

	cout << "Nhap tai nguyen: ";
	do
	{
		cout << "1_HinhAnh, 2_txt, 3_nhap xong:";
		cin >> temp;
		if (temp == 1 || temp == 2)
		{
			TaiNguyen* pTN = NULL;
			if(temp == 1)
				pTN = new TapTinHinhAnh;
			else if (temp == 2)
			{
				pTN = new TapTintxt;
			}
			pTN->nhaptaiNguyen();
			taiNguyen.push_back(pTN);
		}

	} while (temp != 3);

	cout << "Nhap so luong cong viec: ";
	cin >> temp;
	cvCanThucHien.resize(temp);
	for (int i = 0; i < cvCanThucHien.size(); i++)
	{
		cout << "Nhap cong viec thu " << i + 1 << "\n";
		cvCanThucHien[i].nhap();
	}
}

string DuAn::toString()
{
	stringstream s;
	s << "Ma du an: " << maDAn << "\n" << "Ten du an: " << ten << "\n" << "Mo ta du an:" << moTa << "\n";
	s << "Nguoi quan tri du an: " << nguoiQuanTri.tostring();
	s << "Tai nguyen du an: \n";

	for (int i = 0; i < taiNguyen.size(); i++)
	{
		s << taiNguyen[i]->HienThi();
	}
	return s.str();
}


int DuAn::slTaiNguyenHinhAnh()
{
	int res = 0;
	for (int i = 0; i < taiNguyen.size(); i++)
	{
		if (taiNguyen[i]->loaiTaiNguyen() == "HINHANH")
			res++;
	}
	return res;
}

void DuAn::Export()
{
	exporter->Export(maDAn, toString());
}
