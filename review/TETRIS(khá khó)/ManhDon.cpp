#include "ManhDon.h"
ManhDon::ManhDon()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			manhDon[i][j] = '.';
		}
	}
}

void ManhDon::xuat()
{
	cout << "--MANH DON--\n";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << manhDon[i][j] << " ";
		cout << "\n";
	}
}

bool ManhDon::CoTheDat(const ManhDon& other)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			if (manhDon[i][j] == other.manhDon[i][j] && manhDon[i][j] == 'x') return 0;
	}
	return 1;
}


void ManhDon::taoManhtrong()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			manhDon[i][j] = '.';
		}
	}
}
