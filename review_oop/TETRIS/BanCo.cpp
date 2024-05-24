#include "BanCo.h"
#include "ManhDon.h"

BanCo::BanCo()
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 10; j++)
			banCO[i][j] = '.';
	}
}
void BanCo::xuat()
{
	cout << "  ";
	for (int i = 0; i < 10; i++) cout << i << " ";
	cout << "\n";
	for (int hang = 0; hang < 8; hang++)
	{
		cout << hang << " ";
		for (int cot = 0; cot < 10; cot++)
			cout << banCO[hang][cot] << " ";
		cout << "\n";
	}
}

bool BanCo::DatManhVaoBanCo(ManhDon* p)
{
	cout << "Nhap toa do (x,y) (x: hang, y: cot): \n";
	int x, y;
	cout << "x: "; cin >> x;
	cout << "y: "; cin >> y;

	if (0 <= x && x <= 6 && 0 <= y && y <= 6) // van conn sai
	{
		ManhDon temp;
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (banCO[x + i][y + j] == 'x')
					temp.taomanh(i, j);
			}
		}
		if (p->CoTheDat(temp))//neu co the dat vao vi tri x, y--> dat vao
		{
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					if (p->laymanh(i, j) == 'x') banCO[x + i][y + j] = 'x';
				}
			}
			return 1;
		}
		else return 0;
	}
}

void BanCo::KetQua(int& soOGach, int& soCotLapDay)
{
	soOGach = 0; soCotLapDay = 0;
	int temp;
	for (int i = 0; i < COTBANCO; i++)
	{
		temp = soOGach;//khong co o rong trong cot
		for (int j = 0; j < HANGBANCO; j++)
		{
			if (banCO[j][i] == 'x')
			{
				soOGach++;
			}
		}

		if (soOGach - temp == COTBANCO)
		{
			soCotLapDay++;
		}
	}
}