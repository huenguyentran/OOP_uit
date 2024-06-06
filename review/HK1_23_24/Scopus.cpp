#include "Scopus.h"

Scopus::Scopus()
{
    soTiet = 2500;
}

string Scopus::xuatdanhmuc()
{
    stringstream s;
    s << TapChi::xuatdanhmuc() << "Scopus\n";
    return s.str();
}
