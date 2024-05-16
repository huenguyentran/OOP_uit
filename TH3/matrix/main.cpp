#include "MATRAN.h"

int main()
{
	MATRAN a, b;
	//cin >> a;
	a.tao_matran_ngaunhien();
	b.tao_matran_ngaunhien();
	cout << a << b;
	cout << "cong hai ma tran: \n";
	MATRAN c = a + b;
	cout << c;
	cout << "nhan 2 ma tran: \n";
	cout << a * b;
	return 0;
}