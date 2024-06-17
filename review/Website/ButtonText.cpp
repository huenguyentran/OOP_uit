#include "ButtonText.h"

void ButtonText::Nhap()
{
	ThanhPhan::Nhap();
	cout << "Nhap mau nen: \n";
	mauNen.Nhap();
	cout << "Nhap mau chu: \n";
	mauChu.Nhap();
}

bool ButtonText::ktranenchu()
{
	if (mauNen.PhoiMau(mauChu, mauChu) == 2) return 1;
	return false;
}

Mau* ButtonText::laymaunen()
{
	return &mauNen;
}

