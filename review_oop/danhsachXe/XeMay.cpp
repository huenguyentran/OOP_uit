#include "XeMay.h"

XeMay::XeMay()
{
	dongCo = NULL;
	banhXe = NULL;
	khungXe = NULL;
}

XeMay::XeMay(const XeMay& other)
{
	maSoXe = other.maSoXe;
	donGiaXe = other.donGiaXe;
	dongCo = other.dongCo;
	banhXe = other.banhXe;
	khungXe = other.khungXe;
}
XeMay::~XeMay()
{
	delete dongCo;
	delete banhXe; 
	delete khungXe;
}
void XeMay::nhaptt()
{
	cout << "Nhap ma so xe: ";
	cin >> maSoXe;
	cout << "Nhap thong tin dong co\n";
	int temp;
	do {
		cout << "Loai dong co: 1_A, 2_B, 3_C: ";
		cin >> temp;
	} while (temp != 1 && temp != 2 && temp != 3);
	switch (temp)
	{
	case 1:
		dongCo = new DongCoA;
		break;
	case 2:
		dongCo = new DongCoB;
		break;
	case 3:
		dongCo = new DongCoC;
		break;
	default:
		;
	}
	dongCo->Nhap();
	cout << "Nhap thong tin banh xe\n";
	do {
		cout << "Loai banh xe: 1_D, 2_E: ";
		cin >> temp;
	} while (temp != 1 && temp != 2);
	switch (temp)
	{
	case 1:
		banhXe = new BanhXeD;
		break;
	case 2:
		banhXe = new BanhXeE;
		break;
	default:
		;
	}

	banhXe->Nhap();

	cout << "Nhap thong tin khung xe\n";
	do {
		cout << "Loai khung xe: 1_khung nhom, 2_khung nhua: ";
		cin >> temp;
	} while (temp != 1 && temp != 2);

	switch (temp)
	{
	case 1:
		khungXe = new KhungXeNhom;
		break;
	case 2:
		khungXe = new KhungXeNhua;
		break;
	default:
		;
	}
	khungXe->Nhap();
}

double XeMay::TinhDonGia()
{
	return donGiaXe = dongCo->DonGia() + banhXe->DonGia() + khungXe->DonGia();
}

void XeMay::xuattt()
{
	cout << "XUAT TT 1 XE:\n";
	cout << "ma so xe :" << maSoXe << "\n";
	cout << "DONG CO\n";
	dongCo->Xuat();
	cout << "BANH XE\n";
	banhXe->Xuat();
	cout << "KHUNG XE\n";
	khungXe->Xuat();
	cout << "DON GIA: " << TinhDonGia();
}

string XeMay::tostring()
{
	stringstream s;
	s << "XUAT TT 1 XE:\n";
	s << "ma so xe :" << maSoXe << "\n";
	s << "DONG CO\n" << dongCo->tostring();
	s << "BANH XE\n" << banhXe->tostring();
	s << "KHUNG XE\n" << khungXe->tostring();
	s << "DON GIA: " << TinhDonGia() << "\n";
	return s.str();
}