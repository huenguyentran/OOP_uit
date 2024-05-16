#include "NVVANPHONG.h"

NVVANPHONG::NVVANPHONG() : NHANVIEN::NHANVIEN() {}
NVVANPHONG::~NVVANPHONG() {}

double NVVANPHONG::tinh_luong()
{
	if (so_ngay_lam_viec_ == 0)
	{
		std::cout << "nhap so ngay lam viec: ";
		std::cin >> so_ngay_lam_viec_;
	}
	luong_ = so_ngay_lam_viec_ * LUONG_1_NGAY;
	return luong_;
}

void NVVANPHONG::nhaptt()
{
	NHANVIEN::nhaptt();
	std::cout << "nhap so ngay lam viec: ";
	std::cin >> so_ngay_lam_viec_;
}

std::string NVVANPHONG::tostring() const
{
	std::stringstream s;
	s << NHANVIEN::tostring();
	s << "\tso ngay lam viec: " << so_ngay_lam_viec_ << "\t";
	s << "\tluong: " << std::setprecision(3) << std::fixed << luong_ << "VNd\n";
	return s.str();
}
void NVVANPHONG::xuattt()
{
	std::cout << this->tostring();
}