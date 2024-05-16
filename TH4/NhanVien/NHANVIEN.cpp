#include "NHANVIEN.h"

NHANVIEN::NHANVIEN(const std::string ten, const std::string ngaysinh)
{
	ho_ten_ = ten;
	ngay_sinh_ = ngaysinh;
}
NHANVIEN::~NHANVIEN() {}

void NHANVIEN::nhaptt()
{
	std::cout << "nhap ho ten: ";
	std::cin.ignore(1);
	getline(std::cin, ho_ten_);
	std::cout << "nhap ngay sinh: \n";
	std::cin >> ngay_sinh_;
}

std::string NHANVIEN::tostring() const
{
	std::stringstream s;
	s << ho_ten_ << "\t" << ngay_sinh_ << "\t";
	return s.str();
}

