#include "DATE.h"

DATE::DATE(){}
DATE::~DATE(){}

void DATE::nhap()
{
	cout << "ngay: ";
	cin >> ngay;
	cout << "thang: ";
	cin >> thang;
	cout << "nam: ";
	cin >> nam;
	if(ktrangay() == 0)
	{
		cout << "ngay ko hop le, nhap lai\n";
		nhap();
	}
	return;
}

int DATE::ngaytrongthang()
{
	switch (thang)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0) return 29;
			else return 28;
	}
	return 0;
}

bool DATE::ktrangay()
{
	if (nam < 0 || nam > 2025) return 0;
	if (thang < 1 && thang > 12) return 0;
	if (ngay < 1 || ngay > ngaytrongthang()) return 0;
	return 1;
}

void DATE::xuat()
{
	cout << ngay << "/" << thang << "/" << nam << endl;
}
