#pragma once
#include "NhomMauABO.h"
class NhomO :public NhomMauABO
{
public:
	NhomO();
	bool CoTheCho(NhomMauABO* a);
	bool DiTruyen(NhomMauABO* cha, NhomMauABO* me);
};