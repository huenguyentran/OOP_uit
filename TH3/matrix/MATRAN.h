#pragma once
#include <bits/stdc++.h>
using namespace std;

class MATRAN // ma tran so nguyen
{
private:
	int cot, dong;
	int **phantu;
public:
	//~MATRAN();
	MATRAN();
	void tao_matran_ngaunhien();
	friend istream& operator>>(istream& in, MATRAN& a);
	friend ostream& operator<<(ostream &out, MATRAN a);
	MATRAN operator+(MATRAN another);
	bool operator=(MATRAN another);
	MATRAN operator*(MATRAN another);
};

istream& operator>>(istream& in, MATRAN& a);
ostream& operator<<(ostream& out, MATRAN a);