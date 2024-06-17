#pragma once
#include "ThanhPhan.h"
#include <string.h>

class Label:public ThanhPhan
{
	string text;
	Mau mauChu, mauNen;
public:
	void Nhap();
	bool ktranenchu();
	Mau* laymaunen();
	
};

