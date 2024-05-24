#pragma once
#include "BanCo.h"
#include "ManhDonI.h"
#include "ManhDonLphai.h"
#include "ManhDonLtrai.h"
#include "ManhDonVuong.h"
#include "ManhDonZtrai.h"
#include "ManhDonZphai.h"
#include "ManhDonT.h"
class game
{
private:
	int diemSo;
	int SoManh; // so manh nguoi choi da xu li
	ManhDon* pManhDon;
	BanCo banCO;
public:
	game();
	game(const game& other);
	~game();
	void phatsinhmanh();
	void xuligame();
	int tinhdiemSO();
};

