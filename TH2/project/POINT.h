#pragma once
#include <iostream>
using namespace std;


class POINT
{
private:
	float x, y;
public:
	POINT();
	~POINT();
	void nhap();
	void xuat();
	float lay_x();
	float lay_y();
	void gan_x(float);
	void gan_y(float);
	bool tinhtien(POINT v);
	bool vitutamG(float, POINT const);
	bool quaytamG(float, POINT const);
};
