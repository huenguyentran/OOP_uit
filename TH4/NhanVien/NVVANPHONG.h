#pragma once
#include "NHANVIEN.h"

const int LUONG_1_NGAY = 100000;

class NVVANPHONG : public NHANVIEN
{
private:
	double so_ngay_lam_viec_;
public:
	NVVANPHONG();
	~NVVANPHONG();

	void nhaptt();
	void xuattt();

	double tinh_luong();
	std::string tostring() const;

};

