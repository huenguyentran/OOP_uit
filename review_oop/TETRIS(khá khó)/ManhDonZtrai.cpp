#include "ManhDonZtrai.h"
ManhDonZtrai::ManhDonZtrai() :ManhDon()
{
	manhDon[0][1] = 'x';
	manhDon[0][2] = 'x';
	manhDon[1][0] = 'x';
	manhDon[1][1] = 'x';

}
void ManhDonZtrai::Xoay()
{
	if (manhDon[0][0] == '.')
	{
		taoManhtrong();
		manhDon[0][0] = 'x';
		manhDon[1][0] = 'x';
		manhDon[1][1] = 'x';
		manhDon[2][1] = 'x';
	}
	else
	{
		taoManhtrong();
		manhDon[0][1] = 'x';
		manhDon[0][2] = 'x';
		manhDon[1][0] = 'x';
		manhDon[1][1] = 'x';
	}
}