#pragma once
#include "ChungCu.h"

class CCVinHome:public ChungCu
{
public:
	CCVinHome() : ChungCu() { soHuu = "Vinhomes"; }
	~CCVinHome() {}

	int tienphong();
};

