#include "TapTintxt.h"

string TapTintxt::HienThi()
{
    stringstream s;
    s << "File: txt\n";
    s << TaiNguyen::HienThi();
    return s.str();
}

string TapTintxt::loaiTaiNguyen()
{
    return "TXT";
}


