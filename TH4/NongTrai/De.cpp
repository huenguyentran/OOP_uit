#include "De.h"
De::De() 
{
	tieng_keu_ = "dede";
}
De::~De() {}

int De::tao_sua()
{
	sua = rand() % 10;
	return sua;
}