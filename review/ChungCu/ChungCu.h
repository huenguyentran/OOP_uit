#pragma once
#include <iostream>
#include <string>
using namespace std;

class ChungCu
{
private:
	string ten, tenQL;
protected:
	string soHuu;
	int dienTich, soTang;
public:// ko can constructor neu chi khai bao tinh
	ChungCu();
	~ChungCu();

	void nhap();
	void xuat();
	virtual int tienphong() = 0;// de double

	string guithongbao()
	{
		return tenQL + " - " + ten + " - " + soHuu ;
	}
};

