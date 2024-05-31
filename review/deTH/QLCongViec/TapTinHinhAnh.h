#pragma once
#include "TaiNguyen.h"
class TapTinHinhAnh:public TaiNguyen
{
private:
	int chieuDai, chieuRong;
public:
	void nhaptaiNguyen();
	string HienThi();
	string loaiTaiNguyen();
};

