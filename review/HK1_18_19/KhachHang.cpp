#include "KhachHang.h"
KhachHang::KhachHang()
{
	pGoiDV = NULL;
}
KhachHang::KhachHang(const KhachHang& a)
{
	tenKH = a.tenKH;
	pGoiDV = a.pGoiDV;
}
KhachHang::~KhachHang()
{
	delete pGoiDV;
}
void KhachHang::Nhap()
{
	cout << "Nhap ten khach hang: ";
	cin.ignore();
	getline(cin, tenKH);

	cout << "Nhap so CCCD: "; cin >> soCCCD;
	cout << "Nhap thoi gian su dung dich vu (theo thang): ";
	cin >> tgsdDV;
	int temp;
	do
	{
		cout << "1_Premium, 2_Basic, 3_Non-memeber: ";
		cin >> temp;
		switch (temp)
		{
		case 1:
			pGoiDV = new Premium;
			break;
		case 2:
			pGoiDV = new Basic;
			break;
		case 3:
			pGoiDV = new NonMember;
			break;
		default:
			continue;
		}
		pGoiDV->nhap();
	} while (temp != 1 && temp != 2 && temp != 3);
}

string KhachHang::tostring()
{
	stringstream s;
	s << "Ten khach hang: " << tenKH << "\tCCCD: " << soCCCD << "\n";
	s << pGoiDV->tostring();
	s << "Tong chi tieu: " << TinhtongChi() << "\n";
	return s.str();
}

int KhachHang::TinhtongChi()
{
	return pGoiDV->TongTienCuaGoi() * tgsdDV;
}