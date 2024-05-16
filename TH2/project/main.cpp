#include "POINT.h"
#include "VECTOR.h"
#include "TAMGIAC.h"
#include "DAGIAC.h"

int main()
{
	POINT A;
	VECTOR v;
	cout << "nhap diem A: \n";
	A.nhap();
	cout << "nhap vector tinh tien: \n";
	cin >> v;
	v.tt_ve_goc();
	A.tinhtien(v.lay_vect_cuoi());
	cout << "diem sau khi tinh tien: ";
	A.xuat();
	cout << endl;
	

	TAMGIAC tgc;
	tgc.nhap();
	tgc.tinhtientg();
	tgc.xuat();
	tgc.thu_phong();
	tgc.xuat();
	tgc.quay();
	tgc.xuat();

	DAGIAC dagiac;
	dagiac.nhapDaGiac();
	dagiac.tinhtien();
	dagiac.xuatDaGiac();
	dagiac.thu_phong();
	dagiac.xuatDaGiac();
	dagiac.xoay();
	dagiac.xuatDaGiac();

	return 0;
}