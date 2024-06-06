#pragma once
#include "BaiBao.h"
#include "GiangVien.h"
#include "NCKH.h"
class TruongDH
{
	vector <BaiBao> vbaibao;
	vector <NCKH*> vdeTai;
public:
	void nhapDSBaiBao();

	int tongsotiet();

	bool Detaiduddk();
};

