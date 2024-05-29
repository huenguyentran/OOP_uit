#include "RungChong.h"
void RungChong::ThietLap()
{
	cout << "Nhap chieu cao 7 cay chong: ";
	for (int i = 0; i < 7; i++)
		cin >> chieuCao[i];
	cout << "Nhap gia tri qua tao: ";
	cin >> quaBao;
}
bool RungChong::VuotQua(NguoiChoi a)
{
	
	for (int i = 0; i < 7; i++)
	{
		if (a.SucNhay()[i] + quaBao < chieuCao[i])
			return 0;
	}
	return 1;
}