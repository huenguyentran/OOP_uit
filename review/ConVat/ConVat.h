#pragma once
//4:45PM-->5h32PM
#include <iostream>
using namespace std;
enum LOAI {MUOI, ECH, BUOM};
class ConVat
{
protected:
	int trungNo, auTrung, lotXac, deTrung;
	int loai;
public:
	virtual void nhap();
	virtual bool dungQL() = 0;
	int loaiSV() { return loai; }
};

