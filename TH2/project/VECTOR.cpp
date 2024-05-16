#include "VECTOR.h"


istream& operator>>(istream& in, VECTOR& a)
{
	cout << "nhap vector\n"
		 << "nhap diem goc vector: \n";
	a.goc.nhap();
	cout << "nhap diem cuoi vector: \n";
	a.cuoi.nhap();
	return in;
}

VECTOR::VECTOR(POINT A, POINT B)
{
	goc.gan_x(A.lay_x());
	goc.gan_y(A.lay_y());
	cuoi.gan_x(B.lay_x());
	cuoi.gan_y(B.lay_y());
}
VECTOR::VECTOR(){}

bool VECTOR::vector0()
{
	if (goc.lay_x() != cuoi.lay_x()) return 0;
	if (goc.lay_y() != cuoi.lay_y()) return 0;
	return 1;
}

VECTOR VECTOR::tt_ve_goc()
{
	float temp;
	temp = cuoi.lay_x() - goc.lay_x();
	cuoi.gan_x(temp);
	temp = cuoi.lay_y() - goc.lay_y();
	cuoi.gan_y(temp);
	goc.gan_x(0);
	goc.gan_y(0);
	return *this;
}


POINT VECTOR::lay_vect_goc()
{
	POINT temp;
	temp.gan_x(goc.lay_x());
	temp.gan_y(goc.lay_y());
	return temp;
}
POINT VECTOR::lay_vect_cuoi()
{
	POINT temp;
	temp.gan_x(cuoi.lay_x());
	temp.gan_y(cuoi.lay_y());
	return temp;
}

VECTOR VECTOR::operator*(float k)
{
	cuoi.gan_x(k * cuoi.lay_x());
	cuoi.gan_y(k * cuoi.lay_y());
	return *this;
}