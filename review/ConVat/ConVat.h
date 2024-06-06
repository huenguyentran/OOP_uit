#pragma once
//4:45PM-->5h32PM
#include <iostream>
#include <string>
using namespace std;
class ConVat
{
public:
	virtual void nhap() = 0;
	virtual void xuat() = 0;
	virtual bool dungQL() = 0;
	virtual string loai() = 0;
};

