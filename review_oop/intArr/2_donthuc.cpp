#include <iostream>
#include <cmath>

using namespace std;

class DONTHUC
{
double heSo;
int soMu;
public:
DONTHUC(){}
DONTHUC(double he_so, int so_mu) { heSo = he_so; soMu = so_mu;}
double gia_tri_donthuc ( const double& x)
{
    return heSo * pow(x, soMu);
}

DONTHUC operator+(const DONTHUC& a)
{
    DONTHUC res(0,0);
    if(a.soMu != soMu) return res;

    res.heSo = heSo + a.heSo;
    res.soMu = a.soMu;

    return res;
}

};