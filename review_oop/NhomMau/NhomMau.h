#pragma once
#include "NhomO.h"
#include "NhomA.h"
#include "NhomB.h"
#include "NhomAB.h"


#include "Rhnegative.h"
#include "Rhpositive.h"
class NhomMau
{
private:
	NhomMauABO* pABO;
	PhanLoaiRh* pRh;
public:
	NhomMau();
	~NhomMau();
	bool CoTheCho(NhomMau other);
	bool DiTruyen(NhomMau cha, NhomMau me);
	void nhap();
	string tostring();
};

