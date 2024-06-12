#pragma once
#include "GoiDV.h"
#include "Premium.h"
#include "Basic.h"
#include "Non_member.h"
#include <string>

class KhachHang
{
private:
	string hoTen, CCCD;
	GoiDV* pgoiDV; // mot khach hang co the co  nhieu goi dv ---> tg khac
	int thoiGian;
public:
	KhachHang();
	~KhachHang();
	void Nhap();
	void Xuat();
	int chiTieu();
};

