#include "ChungCu.h"
//begin 16:19
ChungCu::ChungCu() 
{
	ten = "";
	tenQL = "";
}

ChungCu::~ChungCu() {}


void ChungCu::nhap()
{
	cout << "nhap ten QL chung cu: ";
	cin.ignore();
	getline(cin, tenQL);
	cout << "nhap ten chung cu: ";
	//cin.ignore();
	getline(cin, ten);
	cout << "nhap so tang: ";
	cin >> soTang;
	cout << "nhap dien tich (m^2): ";
	cin >> dienTich;
}

void ChungCu::xuat()
{
	cout << tenQL << " - " << ten << " - " << soHuu << endl;
}