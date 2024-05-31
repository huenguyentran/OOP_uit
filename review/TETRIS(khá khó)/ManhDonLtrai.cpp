#include "ManhDonLtrai.h"
ManhDonLtrai::ManhDonLtrai():ManhDon()
{// tao manh don trai len
	int i = 1;
	for (int j = 0; j < 3; j++)
	{
		manhDon[j][i] = 'x';
	}
	manhDon[2][0] = 'x';

}
void ManhDonLtrai::Xoay()
{
	if (manhDon[0][0] == '.') // 	_|	
	{
		this->taoManhtrong();
		manhDon[0][0] = 'x';
		for (int j = 0; j < 3; j++)
			manhDon[1][j] = 'x';
	}
	else if (manhDon[1][1] == 'x')// |_____
	{
		this->taoManhtrong();
		manhDon[0][1] = 'x';
		for (int i = 0; i < 3; i++)
			manhDon[i][0] = 'x';
	}
	else if (manhDon[2][0] == 'x')
	{
		this->taoManhtrong();
		manhDon[1][2] = 'x';
		for (int i = 0; i < 3; i++)
			manhDon[0][i] = 'x';
	}
	else
	{
		this->taoManhtrong();
		int i = 1;
		for (int j = 0; j < 3; j++)
		{
			manhDon[j][i] = 'x';
		}
		manhDon[2][0] = 'x';

	}
}