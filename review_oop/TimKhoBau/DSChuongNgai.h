#pragma once
#include "ChuongNgai.h"
#include "RungChong.h"
#include "DuongHam.h"
#include "QuaiVat.h"
class DSChuongNgai
{
private:
	vector <ChuongNgai*> pChuongNgai;
public:
	void nhap();
	bool TimDuocKhoBau(NguoiChoi a);
};

