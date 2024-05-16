#pragma once
#include "POINT.h"
#include "VECTOR.h"


class DAGIAC
{
private:
	int n;
	POINT* ptr;
	POINT G; //trong tam cua da giac
public:
	DAGIAC();
	~DAGIAC();
	void nhapDaGiac();
	void xuatDaGiac();
	bool tinhtien();
	float thu_phong();
	bool xoay();
};

