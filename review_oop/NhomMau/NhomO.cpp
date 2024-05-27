#include "NhomO.h"
NhomO::NhomO()
{
	nhomMau = "O";
}
bool NhomO::CoTheCho(NhomMauABO* a)
{
	return 1;
}
bool NhomO::DiTruyen(NhomMauABO* cha, NhomMauABO* me)
{
	if (cha->NhomMau() == "AB" || me->NhomMau() == "AB")
		return 0;
	return 1;
}