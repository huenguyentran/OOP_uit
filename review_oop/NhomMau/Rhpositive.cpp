#include "Rhpositive.h"
Rhpositive::Rhpositive()
{
	phanloai = "+";
}
bool Rhpositive::CoTheCho(PhanLoaiRh* a)
{
	if (a->PhanLoai() == "+")
		return 1;
	return 0;
}