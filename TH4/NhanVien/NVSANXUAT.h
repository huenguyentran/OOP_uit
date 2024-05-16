#pragma once
#include "NHANVIEN.h"

const int TIEN_CONG1_SP = 5000;
class NVSANXUAT : public NHANVIEN
{
private:
	float luong_co_ban_;
	int so_san_pham_;
public:
	NVSANXUAT();
	~NVSANXUAT();

	void nhaptt();
	void xuattt();

	double tinh_luong();
	std::string tostring() const;

};
