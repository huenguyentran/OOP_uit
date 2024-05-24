#include "ManhDonI.h"

ManhDonI::ManhDonI():ManhDon()
{
	int j = 0;
	for (int i = 0; i < 4; i++)
		manhDon[i][j] = 'x';
}

void ManhDonI::Xoay()//swap(i, j)
{
	for (int i = 0; i < 4; i++)
	{
		swap(manhDon[i][0], manhDon[0][i]);
	}
}