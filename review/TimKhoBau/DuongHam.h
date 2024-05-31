#pragma once
#include "ChuongNgai.h"
#include <vector>
class DuongHam:public ChuongNgai
{
private:
	vector <int> cotMoc;
public:
	void ThietLap();
	bool VuotQua(NguoiChoi a);
	
};

