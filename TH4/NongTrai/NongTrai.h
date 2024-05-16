#pragma once
#include "GiaSuc.h"
#include <vector>
#include "Bo.h"
#include "De.h"
#include "Cuu.h"

class NongTrai
{
private:
	int soluong_giasuc;
	int bo, de, cuu;
	std::vector<GiaSuc*> pGiaSuc;
	int bo_con, de_con, cuu_con;
	int sua_bo, sua_de, sua_cuu;
public:
	NongTrai();
	~NongTrai();


	void nhap_tt();
	void tieng_keu_nghe_duoc();
	void thong_ke();
	void so_con_sinh_ra();
	void so_sua_tao();

	// sau 1 luaa sinh:
	void bo_();
	void cuu_();
	void de_();
};

