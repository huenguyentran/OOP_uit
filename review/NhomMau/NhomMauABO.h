#pragma once
#include "header.h"
class NhomMauABO
{
protected:
	string nhomMau;
public:
	string NhomMau() { return nhomMau; }
	virtual bool CoTheCho(NhomMauABO* a) = 0;
	virtual bool DiTruyen(NhomMauABO* cha, NhomMauABO* me) = 0;
};

