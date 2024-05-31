#pragma once
#include "ChungCu.h"
class CCBcon:public ChungCu
{
public:
	CCBcon() : ChungCu() { soHuu = "Bcons"; }
	~CCBcon() {}

	int tienphong();
};

