#include "NonMember.h"
NonMember::NonMember()
{
	phiCoBan = 200;
}

void NonMember::nhap()
{
	cout << "Cac goi dang ki\n";
	int temp;
	do
	{
		cout << "1_Ho tro PT, 2_khong ddk them dv: ";
		cin >> temp;
		if (temp == 1)
			pCacDV.push_back(new DVHoTroPT(200));
	} while (temp != 2 && temp != 1);
}

string NonMember::tostring()
{
	stringstream s;
	s << "Non-member\n" << GoiDV::tostring();
	return s.str();
}