#include "CTime.h"
#include "CTimeSpan.h"

using namespace std;

int main()
{
	CTime a, b;
	cout << "nhap CTime a: \n";
	cin >> a;
	cout << a << endl;
	cout << "nhap CTime b: \n";
	cin >> b;
	cout << b << endl; 
	CTimeSpan c = a - b;
	cout << "a - b = " << c;
	return 0;
}