#pragma once
#include "GiangVien.h"
#include "DanhMuc.h"
#include "NCKH.h" // ko can lam ham nhap de tai
// gia su da co an danh sach cac de tai

#include "ISI.h"
#include "Non_Index.h"
#include "Scopus.h"
#include "nonCore_ranking.h"
#include "Core_ranking.h"
class BaiBao
{
private:
	string maBaiBao, tenBaiBao, DOI, namXB;
	GiangVien tacgiaChinh;
	vector <GiangVien> vdongTacGia;
	DanhMuc* pdanhMuc;
	NCKH* detai;
public:
	double SoTietBaiBao(string ma_gv);
	void nhapBB();
	NCKH* DETAI() { return detai; }
};

