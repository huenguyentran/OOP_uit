#pragma once
#include "POINT.h"
#include <iostream>
using namespace std;

class POINT;

class VECTOR
{
private:
	POINT goc, cuoi;
public:
	friend istream& operator>>(istream& in, VECTOR& a);
	VECTOR(POINT A, POINT B);
	VECTOR();
	bool vector0();
	VECTOR tt_ve_goc();
	POINT lay_vect_goc();
	POINT lay_vect_cuoi();
	VECTOR operator*(float k);
};

istream& operator>>(istream& in, VECTOR& a);

