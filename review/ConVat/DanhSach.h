#pragma once
#include "Muoi.h"
#include "Ech.h"
#include "Buom.h"
class DanhSach
{
private:
	ConVat** pConVat;
	int so_luong;
public:
	DanhSach();
	~DanhSach();
	void input();
	void khongtheoQl();
	bool co_dadangST();

};

