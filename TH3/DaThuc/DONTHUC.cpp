#include "DONTHUC.h"

ostream& operator << (ostream& out, DONTHUC x) {
    if (x.DONTHUC0()) return out;
    else if (x.heso == 1 && x.somu == 0) cout << "+" << 1;
    else if (x.heso == -1 && x.somu == 0) cout << -1;
    else if (x.somu == 0) x.xuatheso(x.heso);
    else {
        x.xuatheso(x.heso);
        x.xuatmu(x.somu);
    }
    return out;
}

istream& operator >> (istream& in, DONTHUC& x) {
    cout << "nhap he so: ";
    cin >> x.heso;
    cout << "nhap so mu: "; cin >> x.somu;
    return in;
}

DONTHUC::DONTHUC()
{
    heso = 0;
    somu = 0;
}

DONTHUC::DONTHUC(int m)
{
    heso = m;
    somu = 0;
}

DONTHUC DONTHUC::operator+(DONTHUC another) {
    DONTHUC kq;
    kq.heso = this->heso + another.heso;
    kq.somu = this->somu;
    return kq;
}

bool DONTHUC::operator=(DONTHUC another)
{
    if (another.heso == 0) return 0;
    heso = another.heso;
    somu = another.somu;
    return 1;
}

bool DONTHUC::DONTHUC0()
{
    return !heso; //he so donthuc = 0 --> donthuc 0
}

void DONTHUC::xuatmu(int n) {
    if (n == 1) cout << "x";
    else cout << "x^" << n;
}
void DONTHUC::xuatheso(double n) {
    if (n > 1) cout << "+" << n;
    else if (n == 1) cout << "+";
    else if (n < -1) cout << n;
    else if (n == -1) cout << "-";
}

float DONTHUC::tinh_donthuc()
{
    return heso * (pow(x, somu));
}