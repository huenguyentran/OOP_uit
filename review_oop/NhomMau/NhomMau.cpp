#include "NhomMau.h"
NhomMau::NhomMau()
{
	pABO = NULL;
	pRh = NULL;
}

NhomMau::~NhomMau()
{
	delete pABO;
	delete pRh;
}

void NhomMau::nhap()
{
	int chon;
	cout << "Nhap nhom mau: \n";
	do
	{
		cout << "1_nhom A, 2_nhom B, 3_nhom AB, 4_nhom O: ";
		cin >> chon;
		if (chon == 1)
			pABO = new NhomA;
		else if (chon == 2)
			pABO = new NhomB;
		else if (chon == 3)
			pABO = new NhomAB;
		else if (chon == 4)
			pABO = new NhomO;
	} while (chon != 1 && chon != 2 && chon != 3 && chon != 4);

	chon = 0;
	cout << "Nhap phan loai mau: \n";
	do
	{
		cout << "1_phan loai Rh+, 2_phan loai Rh-: ";
		cin >> chon;
		if (chon == 1)
			pRh = new Rhpositive;
		else if (chon == 2)
			pRh = new Rhnegative;
	} while (chon != 1 && chon != 2);

}
bool NhomMau::CoTheCho(NhomMau other)
{
	if (this->pABO->CoTheCho(other.pABO) && pRh->CoTheCho(other.pRh))
		return 1;
	return 0;
}

bool NhomMau::DiTruyen(NhomMau cha, NhomMau me)
{
	return this->pABO->DiTruyen(cha.pABO, me.pABO);
}

string NhomMau::tostring()
{
	stringstream s;
	s << "Nhom mau: " << pABO->NhomMau() << pRh->PhanLoai();
	return s.str();
}

