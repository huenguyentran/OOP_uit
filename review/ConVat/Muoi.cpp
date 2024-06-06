#include "Muoi.h"
void Muoi::nhap()
{
	cin >> t1 >> t2 >> t3 >> t4;
}

void Muoi::xuat()
{
	cout << "Muoi: " << t1 << ", " << t2 << ", " << t3 << ", " << t3 << endl;
}
bool Muoi::dungQL()
{
	if (t1 < 1 || t1 > 3)
		return 0;
	if (t2 < 4 || t2 > 10)
		return 0;
	if (t3 < 2 || t3 > 3)
		return 0;
	if (t4 < 5 || t4 > 8)
		return 0;
	return 1;
}