#pragma once
#include "NhanVat.h"
#include "QuaiVat.h"

#include <vector>
class DanhSach
{
private:
	vector <QuaiVat*> pQuaiVat;
	vector <NhanVat*> pNguoiChoi;
	int so_luongQV, so_luongNC;
public:
	void nhap_ds();
	void xuat_ds();

	void ke_manh_nhat();//yc 2.

	void tuong_tac();
};

