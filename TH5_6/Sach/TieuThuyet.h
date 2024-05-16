#pragma once
#include "Sach.h"

class TieuThuyet : public Sach
{
private:
	std::string the_loai;
public:
	TieuThuyet();
	~TieuThuyet();

	void nhap();
	void xuat();
};

