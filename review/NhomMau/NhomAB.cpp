#include "NhomAB.h"
NhomAB::NhomAB()
{
	nhomMau = "AB";
}

bool NhomAB::CoTheCho(NhomMauABO* a)
{
	if (a->NhomMau() == "AB")
		return 1;
	return 0;
}
bool NhomAB::DiTruyen(NhomMauABO* cha, NhomMauABO* me)
{
	if (cha->NhomMau() == "AB" || me->NhomMau() == "AB"
		|| (cha->NhomMau() == "A" && me->NhomMau() == "B")
		|| (cha->NhomMau() == "B" && me->NhomMau() == "A"))
		return 1;
	return 0;
}