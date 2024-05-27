#include "ManhDonZphai.h"
ManhDonZphai::ManhDonZphai() :ManhDon()
{
	manhDon[0][0] = 'x';
	manhDon[0][1] = 'x';
	manhDon[1][1] = 'x';
	manhDon[1][2] = 'x';

}
void ManhDonZphai::Xoay()
{
	if (manhDon[0][0] == 'x')
	{
		taoManhtrong();
		manhDon[1][0] = 'x';
		manhDon[2][0] = 'x';
		manhDon[0][1] = 'x';
		manhDon[1][1] = 'x';
	}
	else
	{
		taoManhtrong();
		manhDon[0][0] = 'x';
		manhDon[0][1] = 'x';
		manhDon[1][1] = 'x';
		manhDon[1][2] = 'x';
	}
}