#include "NCKH.h"


void NCKH::nhapdetai()
{
	cout << "Nhap ma de tai: ";
	cin >> maDeTai;
	cout << "Nhap ten de tai: ";
	cin >> tenDeTai;
	cout << "So luong dang ki: "; cin >> soluongDK;
}
void NCKH::tangThem1BaiBao(string ma_De_Tai)
{
	if(maDeTai == ma_De_Tai)
		slDacongBo++;
}

bool NCKH::dudk()
{
	return slDacongBo >= soluongDK;
}
