#include "DATHUC.h"

int main()
{
	DATHUC a, b, c;
	cin >> a >> b;
	c = a + b;
	cout << c << endl;
	float x;
	cout << "nhap gia tri x de tinh f(x): ";
	cin >> x;
	cout << c.tinh_dathuc(x);
	return 0;
}