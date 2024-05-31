#include "QuaiVat.h"

void QuaiVat::ThietLap()
{
	cout << "Nhap do manh moi chieu thuc (5 chieu): ";
	for (int i = 0; i < 5; i++)
	{
		cin >> doManh[i];
	}
}

bool QuaiVat::VuotQua(NguoiChoi a)
{
	int qvthang = 0, ngchoithang = 0;
	for (int i = 0; i < 5; i++)
	{
		if (doManh[i] < a.DoManh()[i])
			ngchoithang++;
		else qvthang++;
	}

	if (ngchoithang > qvthang) return 1;
	return 0;
}
