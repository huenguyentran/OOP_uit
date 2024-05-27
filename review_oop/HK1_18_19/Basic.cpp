#include "Basic.h"
Basic::Basic()
{
	phiCoBan = 500;
}

void Basic::nhap()
{
	cout << "Cac goi dang ki: \n";
	int temp, goidv[1] = { 0 };
	do
	{
		cout << "1_lop hoc, 2_ho tro PT, 3_nhap xong: ";
		cin >> temp;
		if (temp == 1 || temp == 2)
		{
			DVDiKem* ptemp = NULL;
			if (temp == 1)
				ptemp = new DVLopHoc(100);
			else
			{
				if (goidv[temp - 2] == 0)
				{
					ptemp = new DVHoTroPT(100);
					goidv[temp - 2] == 1;
				}
			}
				pCacDV.push_back(ptemp);
		}
	} while (temp != 3);
}

string Basic::tostring()
{
	stringstream s;
	s << "Basic\n" << GoiDV::tostring();
	return s.str();
}