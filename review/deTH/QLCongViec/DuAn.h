#pragma once
#include "CongViec.h"
#include "User.h"

#include "TapTinHinhAnh.h"
#include "TapTintxt.h"

#include "BExporter.h"
#include "AExporter.h"
class DuAn
{
private:
	vector <CongViec> cvCanThucHien;
	string maDAn, ten, moTa;
	User nguoiQuanTri;
	vector <TaiNguyen*> taiNguyen;
	Exporter* exporter;
public:
	void nhap();
	string toString();// de xuat du an
	int slTaiNguyenHinhAnh();
	void Export();

};

