#include "TruongDH.h"

void TruongDH::nhapDSBaiBao()
{
	int n;
	cout << "Nhap so luong cac bai bao: ";
	cin >> n;
	vbaibao.resize(n);
	for (int i = 0; i < n; i++)
	{
		vbaibao[i].nhapBB();
		if (vbaibao[i].DETAI() != NULL)
			vdeTai.push_back(vbaibao[i].DETAI());
	}
}

int TruongDH::tongsotiet()
{
	cout << "TONG SO TIET CUA 1 GIANG VIEN\n";
	string MAGV;
	cout << "Nhap ma giang vien: ";
	cin >> MAGV;
	double sotiet = 0;
	for (int i = 0; i < vbaibao.size(); i++)
	{
		sotiet += vbaibao[i].SoTietBaiBao(MAGV);
	}
	return 0;
}

bool TruongDH::Detaiduddk()
{
	cout << "DE TAI DA DU DIEU KIEN NGHIEM THU CHUA\n";
	string s;
	cout << "Ma de tai: ";
	cin >> s;
	for (int i = 0; i < vdeTai.size(); i++)
	{
		if (s == vdeTai[i]->MADETAI())
		{
			if (vdeTai[i]->dudk())
			{
				cout << "Du dieu kien nghiem thu\n";
			}
			else cout << "Khong du dieu kien nghiem thu\n";
			return 1;

		}
	}
	return false;
}
