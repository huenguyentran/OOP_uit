#include "Premium.h"
Premium::Premium()
{
	phiCoBan = 1000;
}
void Premium::nhap()
{
	cout << "Cac goi dang ki: \n";
	int temp, da_dkdv2 = 0, da_dkdv3 = 0 ;
	do
	{
		cout << "1_lop hoc, 2_dich vu xong hoi, 3_ho tro PT, 4_nhap xong: ";
		cin >> temp;
		DVDiKem* p = NULL;
		switch (temp)
		{
		case 1:
			p = new DVLopHoc(0);
			break;
		case 2:
			if (!da_dkdv2)
			{
				p = new DVXongHoi(0);
				da_dkdv2 = 1;
			}
			else
				cout << "Da dang ki dich vu\n";
			break;
		case 3:
			if (!da_dkdv3)
			{
				p = new DVHoTroPT(0);
				da_dkdv3 = 1;
			}
			else 
				cout << "Da dang ki dich vu\n";
			break;
		default:
			continue;
		}
		if (p != NULL)
			pCacDV.push_back(p);
	} while (temp != 4);
}

string Premium::tostring()
{
	stringstream s;
	s << "Premium\n" << GoiDV::tostring();
	return s.str();
}