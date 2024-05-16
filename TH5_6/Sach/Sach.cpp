#include "Sach.h"

Sach::Sach(){}
Sach::~Sach() {}

void Sach::nhap()
{
	std::cout << "nhap ten sach: ";
	std::cin.ignore(1);
	std::getline(std::cin, ten);
	std::cout << "nhap ten tac gia: ";
	std::cin.ignore(1);
	std::getline(std::cin, tac_gia);

	std::cout << "nhap nam xuat ban: ";
	std::cin >> nam_xb;
	std::cout << "nhap  gia ban: ";
	std::cin >> gia_ban;
}

void  Sach::xuat()
{
	std::cout << ten << "\t" << tac_gia << "\t" << nam_xb
		<< "\t" << gia_ban << "VND\t";
}