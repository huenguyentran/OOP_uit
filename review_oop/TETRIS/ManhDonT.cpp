#include "ManhDonT.h"
ManhDonT::ManhDonT() :ManhDon()
{
	manhDon[0][0] = 'x';
	manhDon[0][1] = 'x';
	manhDon[0][2] = 'x';
	manhDon[1][1] = 'x';
}
void ManhDonT::Xoay()
{
	if (manhDon[0][0] == 'x' && manhDon[1][0] == '.')
	{
		taoManhtrong();
		manhDon[0][1] = 'x';
		manhDon[1][1] = 'x';
		manhDon[2][1] = 'x';
		manhDon[1][0] = 'x';
	}
	else if(manhDon[0][1] == manhDon[2][1] && manhDon[0][1] == 'x')
	{
		taoManhtrong();
		manhDon[0][1] = 'x';
		manhDon[1][0] = 'x';
		manhDon[1][1] = 'x';
		manhDon[1][2] = 'x';
	}
	else if (manhDon[0][1] == 'x')
	{
		taoManhtrong();
		manhDon[0][0] = 'x';
		manhDon[1][0] = 'x';
		manhDon[2][0] = 'x';
		manhDon[1][1] = 'x';
	}
	else
	{
		taoManhtrong();
		manhDon[0][0] = 'x';
		manhDon[0][1] = 'x';
		manhDon[0][2] = 'x';
		manhDon[1][1] = 'x';
	}
}