#pragma once
#include "header.h"
class ManhDon
{
protected:
	char manhDon[4][4];
public:
	ManhDon();//tao 1 manh 4x4 toan .
	void taoManhtrong();
	//virtual void TaoManh();
	virtual void Xoay() {};
	char taomanh(int i, int j) { return manhDon[i][j] = 'x'; } // tao tai cai diemx cua manh
	char laymanh(int i, int j) { return manhDon[i][j]; }
	void xuat();
	bool CoTheDat(const ManhDon& other); // manh co the dat vao 1 manh khac hay ko
};

