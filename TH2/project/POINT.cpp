#include "POINT.h"


POINT::POINT()
{
	x = 0;
	y = 0;
}
POINT::~POINT() {}

void POINT::nhap()
{
	cout << "nhap hoan do: ";
	cin >> x;
	cout << "nhap tung do: ";
	cin >> y;
}
void POINT::xuat()
{
	cout << "(" << x << ", " << y << ")";
}

float POINT::lay_x(){ return x;}
float POINT::lay_y(){ return y;}

void POINT::gan_x(float a){ x = a;}
void POINT::gan_y(float a){ y = a;}

bool POINT::tinhtien(POINT v)
{
	if (v.x == 0 && v.y == 0)
	{
		cout << "khong tinh tien duoc \n";
		return 0;
	}
	x += v.x;
	y += v.y;
	return 1;
}

bool POINT::vitutamG(float K, POINT const G)//K. GA
{
	if (K == 0) return 0;
	POINT V;
	V.x = K * (x - G.x);
	V.y = K * (y - G.y);
	tinhtien(V);
	return 1;
}

bool POINT::quaytamG(float a, POINT const G)
{
	if (a == 0) return 0;
	x = G.x + (x - G.x) * cos(a) - (y - G.y) * sin(a);
	y = G.y + (x - G.x) * sin(a) + (y + G.y) * cos(a);
	return 1;
}