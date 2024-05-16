#include "TAMGIAC.h"

TAMGIAC::TAMGIAC(){}

TAMGIAC::~TAMGIAC(){}

void TAMGIAC::nhap()
{
	cout << "nhap dinh thu nhat: \n";
	A.nhap();
	cout << "nhap dinh thu hai: \n";
	B.nhap();
	cout << "nhap dinh thu ba: \n";
	C.nhap();
	//tinh trong tam tg
	G.gan_x((A.lay_x() + B.lay_x() + C.lay_x()) / 3);
	G.gan_y((A.lay_y() + B.lay_y() + C.lay_y()) / 3);
}

void TAMGIAC::xuat()
{
	cout << "xuat toa do cac dinh tam giac\n";
	A.xuat(); cout << "\t";
	B.xuat(); cout << "\t";
	C.xuat(); cout << "\n";
}

bool TAMGIAC::tinhtientg()
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
	A.tinhtien(prt);
	B.tinhtien(prt);
	C.tinhtien(prt);
	return 1;
}

float TAMGIAC::thu_phong()// ti so dong dang, vOM = K. vOM'
{
	cout << "thu phong tam giac\nnhap ti so k: \n";
	float k;
	cin >> k;
	while (k != 0)
	{
		cout << "nhap lai k: ";
		cin >> k;
	} 
	if (abs(k) > 1) cout << "phong to tam giac\n";
	else if (abs(k) == 1) cout << "giu nguyen kich thuoc\n";
	else cout << "thu nho tam giac\n";
	A.vitutamG(k, G);
	B.vitutamG(k, G);
	C.vitutamG(k, G);
	return k;
}


bool TAMGIAC::quay()
{
	cout << "quay tam giac\nnhap ti so k: \n";
	float a;
	cin >> a;
	if (a == 0) return 0;
	A.quaytamG(a, G);
	B.quaytamG(a, G);
	C.quaytamG(a, G);
	return 1;
}



