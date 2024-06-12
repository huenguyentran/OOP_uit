#include "Basic.h"

Basic::Basic()
{
	phiCB = 500;
}

void Basic::Nhap()
{
	cout << "So lop hoc dang ki: "; cin >> solopDK;
	cout << "Dang ki dv ho tro PT: 1_dk, 0_ko dk: "; cin >> dvPT;
}

void Basic::Xuat()
{
	if (solopDK) cout << "Dang ki " << solopDK << "lop hoc\n";
	else cout << "Khong dang ki lop hoc nao\n";
	if (dvPT) cout << "Dang ki dich vu PT\n";
	else cout << "Khong dang ki dv ho tro PT\n";

}

int Basic::phi1Thang()
{
	return phiCB + 100 * solopDK + 100 * dvPT;
}

