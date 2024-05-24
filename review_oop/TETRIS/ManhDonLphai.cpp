#include "ManhDonLphai.h"

ManhDonLphai::ManhDonLphai():ManhDon()
{
	for (int i = 0; i < 3; i++)
		manhDon[i][0] = 'x';
	manhDon[2][1] = 'x';
}
void ManhDonLphai::Xoay()
{
	if (manhDon[2][1] == 'x')
	{
		taoManhtrong();
		for (int i = 0; i < 3; i++)
			manhDon[0][i] = 'x';
		manhDon[1][0] = 'x';
	}
	else if (manhDon[0][0] == manhDon[0][2] && manhDon[0][0] == 'x')
	{
		taoManhtrong();
		for (int i = 0; i < 3; i++)
			manhDon[i][1] = 'x';
		manhDon[0][0] = 'x';
	}
	else if (manhDon[2][1] == 'x')
	{
		taoManhtrong();
		for (int i = 0; i < 3; i++)
			manhDon[1][i] = 'x';
		manhDon[0][2] = 'x';
	}
	else
	{
		taoManhtrong();
		for (int i = 0; i < 3; i++)
			manhDon[i][0] = 'x';
		manhDon[2][1] = 'x';
	}
}
