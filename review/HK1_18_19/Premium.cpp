#include "Premium.h"

Premium::Premium()
{
	phiCB = 1000;
}

void Premium::Nhap()
{
	cout << "So lop hoc dang ki: "; cin >> solopDK;
	cout << "Dang ki dv xong hoi: 1_DK, 0_khong dk: "; cin >> dvXongHoi;
	cout << "Dang ki dv ho tro PT: 1_dk, 0_ko dk: "; cin >> dvPT;
}

void Premium::Xuat()
{
	if (solopDK) cout << "Dang ki " << solopDK << "lop hoc\n";
	else cout << "Khong dang ki lop hoc nao\n";
	if (dvXongHoi) cout << "Dang ki dich vu xong hoi\n";
	if (dvPT) cout << "Dang ki dich vu PT\n";
	else cout << "Khong dang ki dv ho tro PT\n";

}

int Premium::phi1Thang()
{
	return phiCB;
}


