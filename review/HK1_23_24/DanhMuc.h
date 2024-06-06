#pragma once
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
class DanhMuc
{
protected:
	double soTiet;
public:
	double SoTiet() { return soTiet; }
	virtual string xuatdanhmuc() = 0;
};

