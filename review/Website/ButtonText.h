#pragma once
#include "ThanhPhan.h"
#include <string.h>
class ButtonText :public ThanhPhan
{
	Mau mauChu, mauNen;
public:
	void Nhap();
	bool ktranenchu();
	Mau* laymaunen();

};

