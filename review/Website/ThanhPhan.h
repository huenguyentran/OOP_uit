#pragma once
#include "Mau.h"
class ThanhPhan
{
	int hoanhDo, tungDo, dai, rong;
public:
	virtual void Nhap();
	virtual bool ktranenchu() = 0;
	virtual Mau* laymaunen() = 0;
};

