#pragma once
#include "header.h"
class TaiNguyen
{
protected:
	string filename;
	string tieuDe, mtnoiDung;
public:
	
	virtual void nhaptaiNguyen();
	virtual string HienThi();
	virtual string loaiTaiNguyen() = 0;
};

