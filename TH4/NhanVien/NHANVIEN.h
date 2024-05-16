#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

class NHANVIEN
{ 5jdxz
protected:
	std::string ho_ten_, ngay_sinh_;
	double luong_;
public:
	NHANVIEN(const std::string = "", const std::string = "");
	virtual ~NHANVIEN();

	virtual std::string tostring() const;
	virtual double tinh_luong() = 0;

	virtual void nhaptt();
	virtual void xuattt() = 0;
};

