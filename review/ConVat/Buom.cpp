#include "Buom.h"


void Buom::nhap()
{
	cin >> t1 >> t2 >> t3 >> t4;
}

void Buom::xuat()
{
	cout << "Buom: " << t1 << ", " << t2 << ", " << t3 << ", " << t4 << endl;
}

bool Buom::dungQL()
{
	if (t1 < 3 || t1 > 8)
		return 0;
	if (t2 != 15 && t2 != 16)
		return 0;
	if (t3 != 10)
		return 0;
	if (t4 != 2 && t4 != 3)
		return 0;
	return 1;
}