#include "User.h"

void User::nhapttuser()
{
	cout << "Nhap ma so: ";
	cin >> maSO;
	cout << "Nhap ten: ";
	cin.ignore();
	getline(cin, ten);
	if (vaiTro == "")
	{
		cout << "Nhap vai tro: ";
		cin.ignore();
		getline(cin, vaiTro);
	}
}

string User::tostring()
{
	stringstream s;
	s << maSO << "\t" << ten << "\t" << vaiTro << "\n";
	return s.str();
}

void User::setvaiTro(string VaiTro)
{
	vaiTro = VaiTro;
}
