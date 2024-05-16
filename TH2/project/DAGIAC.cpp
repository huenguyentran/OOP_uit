#include "DAGIAC.h"


DAGIAC::DAGIAC()
{
	n = 0;
	ptr = NULL;
}

DAGIAC::~DAGIAC()
{
	delete[] ptr;
}

void DAGIAC::nhapDaGiac()
{
	cout << "nhap so luong dinh cua da giac: ";
	cin >> n;
	ptr = new POINT[n];
	float x = 0, y = 0;
	for (int i = 0; i < n; i++)
	{
		ptr[i].nhap();
		x += ptr[i].lay_x();
		y += ptr[i].lay_y();
	}
	G.gan_x(x / n);
	G.gan_y(y / n);
}

void DAGIAC::xuatDaGiac()
{
	for (int i = 0; i < n; i++)
	{ 
		ptr[i].xuat();
		cout << endl;
	}
}

bool DAGIAC::tinhtien()
{
	VECTOR v;
	cout << "nhap vector tinh tien: \n";
	cin >> v;
	v.tt_ve_goc();
	POINT prt = v.lay_vect_cuoi();
	if (prt.lay_x() == 0 && prt.lay_y() == 0)
	{
		cout << "khong tinh tien duoc: \n";
		return 0; 
	}
	cout << endl;
	for (int i = 0; i < n; i++)
		ptr[i].tinhtien(prt);
	return 1;
}


float DAGIAC::thu_phong()
{
	cout << "thu phong da giac\nnhap ti so k: \n";
	float k;
	cin >> k;
	while (k != 0)
	{
		cout << "khong thu phong duoc, nhap lai k: ";
		cin >> k;
	} 
	if (abs(k) > 1) cout << "phong to da giac\n";
	else if (abs(k) == 1) cout << "giu nguyen kich thuoc\n";
	else cout << "thu nho da giac\n";
	for (int i = 0; i < n; i++)
		ptr[i].vitutamG(k, G);
	return k;
}

bool DAGIAC::xoay()
{
	cout << "quay tam giac\nnhap goc quay alpha: \n";
	float a;
	cin >> a;
	if (a == 0) return 0;
	for (int i = 0; i < n; i++)
		ptr[i].quaytamG(a, G);
	return 1;
}
