#pragma once
#include "header.h"
#include "User.h"
class CongViec
{
private:
	string id, tieuDe, moTa, ngayKT;
	vector <CongViec> cvLienQuan; // can lam truoc do
	string trangThai;
	User nguoiTao, nguoiTH;
public:
	void nhap();
};

