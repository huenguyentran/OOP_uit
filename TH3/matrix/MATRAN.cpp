#include "MATRAN.h"

istream& operator>>(istream& in, MATRAN& a)
{
	cout << "nhap so dong: ";
	cin >> a.dong;
	cout << "nhap so cot: ";
	cin >> a.cot;
	a.phantu = new int* [a.dong];
	for (int i = 0; i < a.dong; i++)
	{
		a.phantu[i] = new int[a.cot];
		for (int j = 0; j < a.cot; j++)
		{
			cout << "phan tu [" << i << "][" << j << "]: "; 
			cin >> a.phantu[i][j];
		}
	}
	return in;
}

ostream& operator<<(ostream& out, MATRAN a)
{
	for (int i = 0; i < a.dong; i++)
	{
		for (int j = 0; j < a.cot; j++)
			cout << a.phantu[i][j] << "\t";
		cout << "\n";
	}
	return out;
}

MATRAN::MATRAN()
{
	cot = 0, dong = 0;
	phantu = NULL;
}


void MATRAN::tao_matran_ngaunhien()
{
	cout << "tao ma trran ngau nhien\n"
	     << "nhap so dong: ";
	cin >> dong;
	cout << "nhap so cot: ";
	cin >> cot;
	phantu = new int* [dong];
	for (int i = 0; i < dong; i++)
	{
		phantu[i] = new int[cot];
		for (int j = 0; j < cot; j++)
		{
			phantu[i][j] = rand() % 10;
		}
	}
}

MATRAN MATRAN::operator+(MATRAN another)
{
	MATRAN a;
	if (this->cot != another.cot || dong != another.dong) {
		cout << "khong cung co ko cong duoc\n";
		return a;
	}
	a.cot = cot;
	a.dong = dong;
	a.phantu = new int* [dong];
	for (int i = 0; i < dong; i++)
	{
		a.phantu[i] = new int[cot];
		for (int j = 0; j < cot; j++)
		{
			a.phantu[i][j] = this->phantu[i][j] + another.phantu[i][j];
		}
	}
	return a;
}

bool MATRAN::operator=(MATRAN another)
{
	if (another.phantu == NULL) return NULL;
	if (phantu != NULL)
	{
		for (int i = 0; i < dong; ++i) {
			delete[] phantu[i];
		}
		delete[] phantu;
	}
	dong = another.dong;
	cot = another.cot;
	phantu = new int* [dong];
	for (int i = 0; i < dong; i++)
	{
		phantu[i] = new int[cot];
		for (int j = 0; j < cot; j++)
			phantu[i][j] = another.phantu[i][j];
	}
	return 1;
}

MATRAN MATRAN::operator*(MATRAN another)
{
	MATRAN a;
	if (cot != another.dong)
	{
		cout << "khong nhan duoc 2 ma tran khong cung co \n";
		return a;
	}
	a.cot = another.cot;
	a.dong = this->dong;
	a.phantu = new int* [a.dong];
	for(int i = 0; i < a.dong; i++)
		a.phantu[i] = new int[a.cot];
	for (int i = 0; i < a.dong; i++)
	{
		for (int j = 0; j < a.cot; j++) 
		{
			a.phantu[i][j] = 0;
			for (int h = 0; h < this->cot; h++)
				a.phantu[i][j] += this->phantu[i][h] * another.phantu[h][j];
		}
	}
	return a;
}