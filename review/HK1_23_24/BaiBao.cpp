#include "BaiBao.h"


double BaiBao::SoTietBaiBao(string ma_gv)
{
	double res = 0;
	if (tacgiaChinh.MAGV() == ma_gv)
	{
		res = pdanhMuc->SoTiet() * 0.5;
	}
	else
	{
		for (int i = 0; i < vdongTacGia.size(); i++)
		{
			if (vdongTacGia[i].MAGV() == ma_gv)
				res = pdanhMuc->SoTiet() * 0.5;
				res = res / vdongTacGia.size();
		}
	}

	return res;
}

void BaiBao::nhapBB()
{
	cout << "Ma bai bao: ";
	cin >> maBaiBao;
	cout << "Ten bai bao: ";
	cin.ignore();
	getline(cin, tenBaiBao);
	cout << "DOI: "; cin >> DOI;
	int s;
	cout << "Danh muc: 1_tap chi, 2 hooi nghi: ";
	cin >> s;
	if (s == 1)
	{
		cout << "1_ISI 2_Scopus 3_Non-Index: ";
		cin >> s;
		if (s == 1)
			pdanhMuc = new ISI;
		else if (s == 2)
			pdanhMuc = new Scopus;
		else pdanhMuc = new Non_Index;
	}
	else
	{
		cout << "1_core ranking, 2_khong thuoc core ranking: ";
		cin >> s;
		if (s == 1)
			pdanhMuc = new Core_ranking;
		else
			pdanhMuc = new nonCore_ranking;
	}
	cout << "Nam xuat ban: "; cin >> namXB;
	cout << "Tac gia chinh: ";
	tacgiaChinh.nhap();
	cout << "So dong tac gia: ";
	cin >> s;
	vdongTacGia.resize(s);
	for (int i = 0; i < s; i++)
	{
		vdongTacGia[i].nhap();
	}

	cout << "1_khong thuoc de tai nckh, 2_thuoc de tai nckh: ";
	cin >> s;
	if (s == 2)
	{
		detai = new NCKH;
		detai->nhapdetai();
	}
	else detai = NULL;

}
