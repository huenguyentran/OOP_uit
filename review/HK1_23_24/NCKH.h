#pragma once
#include <iostream>
#include <string>
using namespace std;
class NCKH
{
private:
	string maDeTai, tenDeTai, ngayDK, tgThucHien, ngayNghiemThu;
	int soluongDK;
	int slDacongBo;
public:
	string MADETAI() { return maDeTai; }
	void nhapdetai();
	void tangThem1BaiBao(string ma_De_Tai);
	bool dudk();
};

