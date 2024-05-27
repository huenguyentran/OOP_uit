#pragma once
#include "Nguoi.h"
#include <vector>
class DanhSach
{
private:
	vector <Nguoi*> dsNhomNguoi;
public:
	DanhSach();
	~DanhSach();
	void nhapNhomNguoi();
	void kiemtraDiTruyen();
	void timNguoiChoMau(fstream& file);
	void ghi(fstream& file);
};

