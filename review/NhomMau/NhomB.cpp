#include "NhomB.h"
NhomB::NhomB()
{
	nhomMau = "B";
}
bool NhomB::CoTheCho(NhomMauABO* a)
{
	if (a->NhomMau() == "B" || a->NhomMau() == "AB")
		return 1;
	return 0;
}
bool NhomB::DiTruyen(NhomMauABO* cha, NhomMauABO* me)
{
	if ((cha->NhomMau() == "A" || cha->NhomMau() == "O")
		&& (me->NhomMau() == "A" || me->NhomMau() == "O"))
		return 0;
	return 1;
}