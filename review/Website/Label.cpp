#include "Label.h"

void Label::Nhap()
{
	ThanhPhan::Nhap();
	cout << "Nhap noi dung text: "; cin.ignore();
	getline(cin, text);
	cout << "Nhap mau nen: \n";
	mauNen.Nhap();
	cout << "Nhap mau chu: \n";
	mauChu.Nhap();
}

bool Label::ktranenchu()
{
	if (mauNen.PhoiMau(mauChu, mauChu) == 2) return 1;
	return false;
}

Mau* Label::laymaunen()
{
	return &mauNen;
}
