#include "game.h"

game::game()
{
	pManhDon = NULL;
	SoManh = 0;
}
game::game(const game& other)
{
	pManhDon = other.pManhDon;
	SoManh = other.SoManh;
	diemSo = other.diemSo;
	banCO = other.banCO;
}
game::~game()
{
	if (pManhDon)
	{
		delete pManhDon;
	}
}

void game::phatsinhmanh()
{
	if (pManhDon != NULL)
	{
		delete pManhDon;
		pManhDon = NULL;
	}
	int nrandom;
	nrandom = rand() % 7;
	switch (nrandom)
	{
	case I:
		pManhDon = new ManhDonI;
		break;
	case LTRAI:
		pManhDon = new ManhDonLtrai;
		break;
	case LPHAI:
		pManhDon = new ManhDonLphai;
		break;
	case VUONG:
		pManhDon = new ManhDonVuong;
		break;
	case ZTRAI:
		pManhDon = new ManhDonZtrai;
		break;
	case ZPHAI:
		pManhDon = new ManhDonZphai;
		break;
	case T:
		pManhDon = new ManhDonT;
		break;
	default:
		break;
	}
}

void game::xuligame()
{
	int nchon;
	banCO.xuat();
	phatsinhmanh();
	while(SoManh != 25)
	{
		SoManh++;
		pManhDon->xuat();
		cout << "1_xoay manh, 2_dat manh, 3_bo manh: ";
		cin >> nchon;
		switch (nchon)
		{
		case 1:
			pManhDon->Xoay();
			break;
		case 2:
			while ( nchon == 2 && banCO.DatManhVaoBanCo(pManhDon) == 0 )
			{
				cout << "vi tri dat khong hop le!!!\n"
					<< "2_Dat lai manh, 3_bo manh";
				cin >> nchon;
			}
			if (nchon == 3) // bo manh nguoi choi ko tim duoc vi tri 
				phatsinhmanh();
			else banCO.xuat();// manh dat duoc vao --> xuat ban co
			break;
		case 3:
			phatsinhmanh();
			break;
		default:
			break;
		}
	} 
	cout << "DIEM SO: " << tinhdiemSO();
}


int game::tinhdiemSO()
{
	int soOGach = 0, soCotLapDay = 0;
	banCO.KetQua(soOGach, soCotLapDay);
	return diemSo = (soOGach + 4) * soCotLapDay;
}