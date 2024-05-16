#pragma once
#include "POINT.h"
#include "VECTOR.h"
#include <cmath>


class POINT;
class VECTOR;

class TAMGIAC
{
private:
	POINT A, B, C, G;
public:
	TAMGIAC();
	~TAMGIAC();
	void nhap();
	void xuat();
	bool tinhtientg();
	float thu_phong(); // theo tam G
	bool quay(); // quay theo tam G
};

