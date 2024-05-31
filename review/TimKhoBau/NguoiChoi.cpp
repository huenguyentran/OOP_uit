#include "NguoiChoi.h"
void NguoiChoi::ThietLap()
{
	ThietLapChieuCao();
	ThietLapDoManh();
	ThietLapSucNhay();
}
void NguoiChoi::ThietLapChieuCao()
{
	cout << "Nhap chieu cao nguoi choi: ";
	cin >> chieuCao;
}
void NguoiChoi::ThietLapSucNhay()
{
	cout << "Nhap 7 lan suc nhay qua moi cay chong: ";
	for (int i = 0; i < 7; i++)
		cin >> sucNhay[i];
}
void NguoiChoi::ThietLapDoManh()
{
	cout << "Nhap 5 lan do manh moi chieu dau voi quai vat: ";
	for (int i = 0; i < 5; i++)
		cin >> doManh[i];
}
