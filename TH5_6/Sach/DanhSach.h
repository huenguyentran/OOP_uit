#pragma once
#include "TapChi.h"
#include "SGK.h"
#include "TieuThuyet.h"
#include <vector>

using namespace std;

class DanhSach
{
private:
	vector<Sach*> dsSach;
public:
	DanhSach();
	~DanhSach();	

	void nhapDS();
	void xuatDS();

};

