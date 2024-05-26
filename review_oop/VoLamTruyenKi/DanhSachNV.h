#pragma once
#include "QVDauLinh.h"
#include "QVThongThuong.h"
#include "NguoiChoi.h"
class DanhSachNV
{
private:
	vector <PhanTu*> danhSach;
public:
	DanhSachNV();
	void input();
	void ghi(fstream& file);
	void TuongTac();
	void KeManh(fstream& file);
};

