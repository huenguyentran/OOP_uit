#include "NVSANXUAT.h"

NVSANXUAT::NVSANXUAT() {}
NVSANXUAT::~NVSANXUAT() {}

double NVSANXUAT::tinh_luong() 
{
	if (luong_co_ban_ == 0 || so_san_pham_ == 0)
	{
		std::cout << "nhap luong co ban: ";
		std::cin >> luong_co_ban_;
		std::cout << "nhap so san pham: ";
		std::cin >> so_san_pham_;
	}
	luong_ = luong_co_ban_ + so_san_pham_ * TIEN_CONG1_SP;
	return luong_;
}


void NVSANXUAT::nhaptt()
{
	NHANVIEN::nhaptt();
	std::cout << "nhap luong co ban: ";
	std::cin >> luong_co_ban_;

	std::cout << "nhap so san pham: ";
	std::cin >> so_san_pham_;
}

std::string NVSANXUAT::tostring() const
{
	std::stringstream s;
	s << NHANVIEN::tostring();
	s << "\tluong co ban: " << std::setprecision(3) << std::fixed << luong_co_ban_ << "\t";
	s << "\tso san pham: " << so_san_pham_ << "\t";
	s << "\tluong: "  << luong_ << "VNd\n";
	return s.str();
}


void NVSANXUAT::xuattt()
{
	std::cout << this->tostring();
}