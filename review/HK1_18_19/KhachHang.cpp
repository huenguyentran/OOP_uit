#include "KhachHang.h"

KhachHang::KhachHang()
{
	pgoiDV = NULL;
}

KhachHang::~KhachHang()
{
	if (pgoiDV)
		delete pgoiDV;
	pgoiDV = NULL;
}

void KhachHang::Nhap()
{
	cout << "Nhap ho ten: "; cin.ignore();
	getline(cin, hoTen);
	cout << "CCCD: "; cin >> CCCD;
	cout << "Thoi giaan sd dv: "; cin >> thoiGian;
	int temp;
	do
	{
		cout << "1_premium 2_basic 3_non-member: ";
		cin >> temp;
	} while (temp != 1 && temp != 2 && temp != 3);

	if (temp == 1) pgoiDV = new Premium;
	else if (temp == 2) pgoiDV = new Basic;
	else if (temp == 3) pgoiDV = new Non_member;
	pgoiDV->Nhap();
}

void KhachHang::Xuat()
{
	cout << hoTen << "\t" << CCCD << "\n";
	pgoiDV->Xuat();
}

int KhachHang::chiTieu()
{
	return thoiGian * pgoiDV->phi1Thang();
}
