#pragma once
#include "ChuongNgai.h"
class RungChong:public ChuongNgai
{
private:
	int chieuCao[7];
	int quaBao;
public:
	void ThietLap();
	bool VuotQua(NguoiChoi a);
};

