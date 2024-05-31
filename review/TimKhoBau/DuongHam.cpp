#include "DuongHam.h"
void DuongHam::ThietLap()
{
	int n;
	cout << "Nhap so cot moc: ";
	cin >> n;
	cout << "Nhap cac cot moc: ";
	cotMoc.resize(n);
	for (int x : cotMoc)
		cin >> x;
}
bool DuongHam::VuotQua(NguoiChoi a)
{
	for (int i = 0; i < cotMoc.size(); i++)
	{
		if (cotMoc[i] < a.ChieuCao())
			return 0;
	}
	return 1;
}