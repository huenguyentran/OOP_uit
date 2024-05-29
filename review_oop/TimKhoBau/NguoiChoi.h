#pragma once
#include "ChuongNgai.h"
class NguoiChoi
{
private:
	int sucNhay[7];
	int chieuCao;
	int doManh[5];
public:
	void ThietLap();
	void ThietLapChieuCao();
	void ThietLapSucNhay();
	void ThietLapDoManh();
	int ChieuCao() { return chieuCao; }
	int* SucNhay() { return sucNhay; }
	int* DoManh() { return doManh; }
};

