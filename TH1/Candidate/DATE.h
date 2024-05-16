#pragma once
#include <iostream>
using namespace std;

class DATE
{
private:
	int ngay, thang, nam;
public:
	DATE();
	~DATE();
	void nhap();
	bool ktrangay();
	int ngaytrongthang();
	void xuat();
};

