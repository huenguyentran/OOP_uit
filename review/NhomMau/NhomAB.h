#pragma once
#include "NhomMauABO.h"
class NhomAB :public NhomMauABO
{
public:
	NhomAB();
	bool CoTheCho(NhomMauABO* a);
	bool DiTruyen(NhomMauABO* cha, NhomMauABO* me);
};