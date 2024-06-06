#include "nonCore_ranking.h"

nonCore_ranking::nonCore_ranking()
{
    soTiet = 500;
}

string nonCore_ranking::xuatdanhmuc()
{
    stringstream s;
    s << HoiNghi::xuatdanhmuc() << "khong thuoc bxh Core ranking\n";
    return s.str();
}
