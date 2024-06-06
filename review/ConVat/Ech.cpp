#include "Ech.h"
void Ech::nhap()
{
	cin >> t1 >> t2 >> t3 >> t4 >> t5;
}

void Ech::xuat()
{
	cout << "Ech: " << t1 << ", " << t2 << ", " << t3 << ", " << t4 << ", " << t5 << endl;
} 
bool Ech::dungQL()
{
	if (t1 < 1 || t1 > 3)
		return 0;
	if (t2 != 4)
		return 0;
	if (t3 < 6 || t3 > 9)
		return 0;
	if (t4 < 1 || t4 > 4)
		return 0;
	if (t5 < 2 * 12 * 4 && t5 > 4 * 12 * 4)
		return 0;
	return 1;
}