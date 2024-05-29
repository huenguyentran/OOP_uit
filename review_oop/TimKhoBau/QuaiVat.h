#pragma once
#include "ChuongNgai.h"
class QuaiVat:public ChuongNgai
{
private:
	int doManh[5];
public:
	void ThietLap();
	bool VuotQua(NguoiChoi a);
};

