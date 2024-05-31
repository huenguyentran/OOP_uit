#include "NhomA.h"
NhomA::NhomA()
{
	nhomMau = "A";
}

bool NhomA::CoTheCho(NhomMauABO* orther)
{
	if (orther->NhomMau() == "A" || orther->NhomMau() == "AB")
		return 1;
	return 0;
}
bool NhomA::DiTruyen(NhomMauABO* cha, NhomMauABO* me)
{
	if ((cha->NhomMau() == "B" || cha->NhomMau() == "O")
		&&( me->NhomMau() == "B" || me->NhomMau() == "O"))
		return 0;
}
