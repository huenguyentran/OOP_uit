#pragma once
#include <iostream>
#include <vector>
#include "VectorCanh.h"



class DaGiac
{
private:
	std::vector <Diem*> dsDinh;
protected:
	std::vector <vectorCanh*> canh_;
	int so_dinh;
public:
	DaGiac();
	~DaGiac();

	virtual void nhap(); // ktra diem co nam tren 1 duong thang ko
	virtual void xuat();
	bool tinhTien();

	void set_canh();
};

