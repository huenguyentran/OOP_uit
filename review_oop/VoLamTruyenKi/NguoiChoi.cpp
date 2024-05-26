#include "NguoiChoi.h"
void NguoiChoi::nhap()
{
	PhanTu::nhap();
	cout << "Nhap mon phai: \n";
	int temp = 0;
	if(hanh->Xuat() == "He Kim")
	{
		do
		{
			cout << "1_Thieu Lam 2_Thien vuong bang: ";
			cin >> temp;
			if (temp == 1)
				monPhai = "Thieu Lam";
			else if (temp == 2)
				monPhai = "Thien vuong bang";
		} while (temp != 1 && temp != 2);
	}
	else if (hanh->Xuat() == "He Moc")
	{
		do
		{
			cout << "1_Ngu doc giao 2_Duong mon: ";
			cin >> temp;
			if (temp == 1)
				monPhai = "Ngu doc giao";
			else if (temp == 2)
				monPhai = "Duong mon";
		} while (temp != 1 && temp != 2);
	}else if (hanh->Xuat() == "He Thuy")
	{
		do
		{
			cout << "1_Nga my 2_Thuy yen mon: ";
			cin >> temp;
			if (temp == 1)
				monPhai = "Nga my";
			else if (temp == 2)
				monPhai = "Thuy yen mon";
		} while (temp != 1 && temp != 2);
	} else if (hanh->Xuat() == "He Hoa")
	{
		do
		{
			cout << "1_Cai bang 2_Thien nhan giao: ";
			cin >> temp;
			if (temp == 1)
				monPhai = "Cai bang";
			else if (temp == 2)
				monPhai = "Thien nhan giao";
		} while (temp != 1 && temp != 2);
	} else if (hanh->Xuat() == "He Tho")
	{
		do
		{
			cout << "1_Con lon 2_Vo dang: ";
			cin >> temp;
			if (temp == 1)
				monPhai = "Con lon";
			else if (temp == 2)
				monPhai = "Vo dang";
		} while (temp != 1 && temp != 2);
	}
}

double NguoiChoi::SatThuong()
{
	return capDo * 5;
}

string NguoiChoi::tostring()
{
	stringstream s;
	s << "Nguoi choi: " << PhanTu::tostring() << "Mon Phai: " << monPhai << "\n";
	return s.str();
}