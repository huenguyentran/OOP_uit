#include "Core_ranking.h"

Core_ranking::Core_ranking()
{
    soTiet = 1000;
}

string Core_ranking::xuatdanhmuc()
{
    stringstream s;
    s << HoiNghi::xuatdanhmuc() << "thuoc bxh Core ranking\n";
    return string();
}
