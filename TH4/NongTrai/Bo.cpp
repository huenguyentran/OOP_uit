#include "Bo.h"
Bo::Bo()
{
	tieng_keu_ = "hehe";
}
Bo::~Bo() {}

int Bo::tao_sua()
{
	sua = rand() % 20;
	return sua;
}