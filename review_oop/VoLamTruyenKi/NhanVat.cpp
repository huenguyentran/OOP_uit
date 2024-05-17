#include "NhanVat.h"

void NhanVat::nhap()
{
	cout << "Nhap ten nguoi choi: ";
	cin.ignore(0);
	getline(cin, tenNV);
	cout << "0_He kim, 1_He moc, 2_He thuy, 3_He hoa, 4_He tho: ";
	do { cout << "\nNhap hanh: "; cin >> heNV; }
	while (heNV != 0 && heNV != 1 && heNV != 2 && heNV != 3 && heNV != 4);

	switch (heNV)
	{
	case HEKIM:
		cout << "0_Thieu Lam, 1_Thien Vuong Phai: ";
		break;
	case HEMOC:
		cout << "0_Ngu Doc Giao, 1_Duong Mon: ";
		break;
	case HETHUY:
		cout << "0_Nga My, 1_Thuy Yen Mon: ";
		break;
	case HEHOA:
		cout << "0_Cai Bang, 1_Thien Nhan Giao: ";
		break;
	case HETHO:
		cout << "0_Con Lon, 1_Vo Dang : ";
		break;
	}

	do { cout << "\n Nhap Mon phai: "; cin >> monPhai; }
	while (monPhai != 0 && monPhai != 1);

	cout << "Nhap cap do: ";
	cin >> capDo;
}


void NhanVat::xuat()
{
	cout << tenNV << "\t";

	switch (heNV)
	{
	case HEKIM:
		if (monPhai == 0) cout << "Thieu Lam\t";
		else cout << "Thien Vuong Phai\t";
		break;
	case HEMOC:
		if (monPhai == 0) cout << "Ngu Doc Giao\t";
		else cout << "Duong Mon\t";
		break;
	case HETHUY:
		if (monPhai == 0) cout << "Nga My\t";
		else cout << "Thuy Yen Mon\t";
		break;
	case HEHOA:
		if (monPhai == 0) cout << "Cai Bang\t";
		else cout << "Thien Nhan Giao\t";
		break;
	case HETHO:
		if (monPhai == 0) cout << "Con Lon\t";
		else cout << "Vo Dang\t";
		break;
	}

	cout << "cap do: " << capDo << "\tsat thuong: " << satThuong << "\n";
}

int NhanVat::tinh_sat_thuong()
{
	return satThuong = capDo * 5;
}