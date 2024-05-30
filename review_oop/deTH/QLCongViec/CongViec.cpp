#include "CongViec.h"

void CongViec::nhap()
{
	cout << "Nhap id cong viec: ";
	cin >> id;
	cout << "nhap tieu de cong viec: ";
	cin.ignore();
	getline(cin, tieuDe);
	cout << "nhap mo ta cong viec: ";
	cin.ignore();
	getline(cin, moTa);
	cout << "Nhap ngay ket thuc: ";
	cin >> ngayKT;
	cout << "Nhap cong viec lien quan\n";
	int temp;
	do
	{
		cout << "1_nhap them, 2_nhap xong: ";
		cin >> temp;
		if (temp == 1)
		{
			CongViec a;
			a.nhap();
			this->cvLienQuan.push_back(a);
		}
	} while (temp != 2);

	cout << "Nhap trang thai: ";
	cin >> trangThai;
	cout << "Nhap nguoi tao: \n";
	nguoiTao.nhapttuser();
	cout << "Nhap nguoi thuc hien: \n";
	nguoiTH.nhapttuser();
	
}
