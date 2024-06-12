#include "Non_member.h"

Non_member::Non_member()
{
	phiCB = 200;
}

void Non_member::Nhap()
{
	cout << "Dang ki dv ho tro PT: 1_dk, 0_ko dk: "; cin >> dvPT;
}

void Non_member::Xuat()
{
	if (dvPT) cout << "Dang ki dich vu PT\n";
	else cout << "Khong dang ki dv ho tro PT\n";

}

int Non_member::phi1Thang()
{
	return phiCB + 200 * dvPT;
}

