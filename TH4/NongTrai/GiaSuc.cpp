#include "GiaSuc.h"
GiaSuc::GiaSuc()
{
	tieng_keu_ = "";
}
GiaSuc::~GiaSuc() {}

void GiaSuc::keu()
{
	std::cout << tieng_keu_ << " ";
}

int GiaSuc::sinh_con() 
{
	so_con = rand() % 5 + 1;
	return so_con;
}