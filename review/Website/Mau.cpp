#include "Mau.h"

void Mau::Nhap()
{
	cout << "Nhap tri so mau: "; cin >> triSo;
}

int Mau::PhoiMau(Mau a, Mau b)
{
	if (a.triSo == b.triSo && a.triSo == triSo) return 1;
	int mau[3]; mau[0] = triSo; mau[1] = a.triSo; mau[2] = b.triSo;
	sort(mau, mau + 3);
	if ( (mau[0] + 1 == mau[1] && mau[1] + 1 == mau[2])
		||(mau[0] == 1 && mau[1]  == 2 && mau[2] == 12)
		|| (mau[0] == 1 && mau[1] == 11 && mau[2] == 12) 
		||(mau[0] + 1 == mau[2])
		||(mau[0] == 1 && mau[2] == 12)) return 2;

	if (mau[0] == mau[1] || mau[1] == mau[2])
	{
		if (mau[2] - mau[0] == 6) return 3;
	}
	return 0;
}

