#include "NongTrai.h"


NongTrai::NongTrai()
{
	pGiaSuc.resize(0);
	soluong_giasuc = 0;
}
NongTrai::~NongTrai()
{
	for (int i = 0; i < soluong_giasuc; i++)
	{
		delete pGiaSuc[i];
	}
}


void NongTrai::nhap_tt()
{
	std::cout << "nhap so luong bo: ";
	std::cin >> bo;
	for (soluong_giasuc; soluong_giasuc < bo; soluong_giasuc++)
		pGiaSuc.push_back(new Bo);

	std::cout << "nhap so luong cuu: ";
	std::cin >> cuu;
	for (soluong_giasuc; soluong_giasuc < cuu + bo; soluong_giasuc++)
		pGiaSuc.push_back(new Cuu);

	std::cout << "nhap so luong de: ";
	std::cin >> de;
	for (soluong_giasuc; soluong_giasuc < bo + cuu + de; soluong_giasuc++)
		pGiaSuc.push_back(new De);
}
void NongTrai::tieng_keu_nghe_duoc()
{
	std::cout << "-----Tieng keu nghe duoc-----\n";
	for (int i = 0; i < soluong_giasuc; i++)
		pGiaSuc[i]->keu();
	std::cout << std::endl;
}
void NongTrai::thong_ke()
{
	std::cout << "-------sau 1 lua sinh------\n";
	bo_();
	cuu_();
	de_();
	so_con_sinh_ra();
	so_sua_tao();

}

void NongTrai::so_con_sinh_ra()
{
	std::cout << "\n-----so con sinh ra----\n";
	std::cout << "bo: " << bo_con << "\n"
		<< "cuu: " << cuu_con << "\n"
		<< "de: " << de_con << std::endl;

}
void NongTrai::so_sua_tao()
{
	std::cout << "\n-----so sua tao ra----\n";
	std::cout << "bo: " << sua_bo << " lit\n"
		<< "cuu: " << sua_cuu << " lit\n"
		<< "de: " << sua_de << " lit" << std::endl;
}

void NongTrai::bo_()
{
	bo_con = 0;
	sua_bo = 0;
	for (int i = 0; i < bo; i++)
	{
		bo_con += pGiaSuc[i]->sinh_con();
		sua_bo += pGiaSuc[i]->tao_sua();
	}
}
void NongTrai::cuu_()
{
	cuu_con = 0;
	sua_cuu = 0;
	for (int i = bo; i < bo + cuu; i++)
	{
		cuu_con += pGiaSuc[i]->sinh_con();
		sua_cuu += pGiaSuc[i]->tao_sua();
	}
}
void NongTrai::de_()
{
	de_con = 0;
	sua_de = 0;
	for (int i = bo + cuu; i < soluong_giasuc; i++)
	{
		de_con += pGiaSuc[i]->sinh_con();
		sua_de += pGiaSuc[i]->tao_sua();
	}
}