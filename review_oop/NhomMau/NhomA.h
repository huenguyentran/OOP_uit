#pragma once
#include "NhomMauABO.h"
class NhomA:public NhomMauABO
{
public:
	NhomA();
	bool CoTheCho(NhomMauABO* a);
	bool DiTruyen(NhomMauABO* cha, NhomMauABO* me);
};

