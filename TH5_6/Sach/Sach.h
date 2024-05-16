#pragma once
#include <iostream>
#include <string>

class Sach
{
private:
	std::string ten, tac_gia, nha_xb, gia_ban;
	int nam_xb;
public:
	Sach();
	virtual ~Sach();

	virtual void nhap();
	virtual void xuat();
};

