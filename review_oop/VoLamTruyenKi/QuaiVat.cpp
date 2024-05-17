#include "QuaiVat.h"

void QuaiVat::nhap()
{
	cout << "Nhap ten quai vat: ";
	cin.ignore();
	getline(cin, tenQV);
	cout << "Nhap Hanh: \n";
	cout << "0_He kim, 1_He moc, 2_He thuy, 3_He hoa, 4_He tho: ";
	cin >> heQV;
	cout << "Nhap cap do: ";
	cin >> capDo;
}


void QuaiVat::xuat()
{
	cout << tenQV << "\t";

	switch (heQV)
	{
	case HEKIM: cout << "he kim\t"; break;
	case HEMOC: cout << "he moc\t"; break;
	case HETHUY: cout << "he thuy\t"; break;
	case HEHOA: cout << "he hoa\t"; break;
	case HETHO: cout << "he tho\t"; break;
	default: break;
	}

	cout << "cap do: " << capDo << "\tsat thuong: " << satThuong << "\n";
}