#include "WebSite.h"

WebSite::~WebSite()
{
	for (auto x : vthanhphan) delete x;
	vthanhphan.resize(0);
}

void WebSite::NhapWeb()
{
	cout << "So luong thanh phan cua web: "; cin >> soLuong;
	vthanhphan.resize(soLuong);
	for (int i = 0; i < soLuong; i++)
	{
		int tam;
		do
		{
			cout << "1_Label, 2_Button image, 3_button text: ";
			cin >> tam;
		} while (tam < 1 || tam > 3);
		if (tam == 1) vthanhphan[i] = new Label;
		if (tam == 2) vthanhphan[i] = new ButtonImage;
		if (tam == 3) vthanhphan[i] = new ButtonText;
		vthanhphan[i]->Nhap();
	}
}

void WebSite::ktraTPdau()
{
	int i = 0;
	while (!vthanhphan[i]->laymaunen()) i++;
	if (vthanhphan[i]->ktranenchu() == 1)
		cout << "Thanh phan dau tien co phoi mau bo tuc\n";
	else cout << "Thanh phan dau tien khong co phoi mau bo tuc\n";
}

void WebSite::Ktraquitacphoimau()
{
	bool donsac = 0, botuc = 0, tuongdong = 0;
	for (int i = 0; i < soLuong; i++)
	{
		if (vthanhphan[i]->laymaunen() == NULL) continue;
		for (int j = i + 1; j < soLuong; j++)
		{
			if (vthanhphan[j]->laymaunen() == NULL) continue;
			for (int h = j + 1; h < soLuong; h++)
			{
				if (vthanhphan[h]->laymaunen() == NULL) continue;
				int a = vthanhphan[i]->laymaunen()->PhoiMau(*vthanhphan[j]->laymaunen(), *vthanhphan[h]->laymaunen());
				if (a == 1) donsac = true;
				else if (a == 2) botuc = true;
				else if (a == 3) tuongdong = true;
				else if (a == 0)
				{
					cout << "Khong phu hop quy tac phoi mau nao\n";
					return;
				}
			}
		}
	}
	if (donsac + botuc + tuongdong == 1)
	{
		if (donsac) cout << "Phoi mau don sac\n";
		else if (botuc) cout << "Phoi mau bo tuc truc tiep\n";
		else if (tuongdong) cout << "Phoi mau tuong dong\n";
		return;
	}
	cout << "Khong phu hop quy tac phoi mau nao\n";
	return;
}
