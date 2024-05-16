#include "Cuu.h"
Cuu::Cuu()
{
	GiaSuc::tieng_keu_ = "bebe";
}
Cuu::~Cuu() {}

int	Cuu::tao_sua()
{
	sua = rand() % 5;
	return sua;
}