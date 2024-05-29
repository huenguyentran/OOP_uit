#pragma once
#include <vector>
#include "NguoiChoi.h"
#include <iostream>
using namespace std;
class NguoiChoi;
class ChuongNgai
{
public:
	virtual void ThietLap() = 0;
	virtual bool VuotQua(NguoiChoi a) = 0;
};

