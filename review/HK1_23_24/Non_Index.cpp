#include "Non_Index.h"

Non_Index::Non_Index()
{
    soTiet = 1000;
}

string Non_Index::xuatdanhmuc()
{
    stringstream s;
    s << TapChi::xuatdanhmuc() << "Non-Index\n";
    return s.str();
}
