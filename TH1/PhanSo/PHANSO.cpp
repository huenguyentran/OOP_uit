#include "PHANSO.h"

PHANSO::PHANSO()
{
    tu_so = 0;
    mau_so = 1;
}

PHANSO::~PHANSO(){}

void PHANSO::nhap() {
    cout << "nhap tu so: "; cin >> tu_so;
    cout << "nhap mau so: "; cin >> mau_so;
    if (mau_so == 0) {
        cout << "khong thoa, nhap lai i \n";
        nhap();
    }
}

void PHANSO::cong(PHANSO ps1, PHANSO ps2) {
    this->mau_so = ps1.mau_so * ps2.mau_so;
    this->tu_so = ps1.tu_so * ps2.mau_so + ps2.tu_so * ps1.mau_so;
}

void PHANSO::tru(PHANSO ps1, PHANSO ps2) {
    this->mau_so = ps1.mau_so * ps2.mau_so;
    this->tu_so = ps1.tu_so * ps2.mau_so - ps2.tu_so * ps1.mau_so;
}

void PHANSO::nhan(PHANSO ps1, PHANSO ps2) {
    tu_so = ps1.tu_so * ps2.tu_so;
    mau_so = ps1.mau_so * ps2.mau_so;
}


bool PHANSO::chia(PHANSO ps1, PHANSO ps2) {
    if (ps2.tu_so == 0) {
        cout << "Khong chia duoc " << endl;
        return 0;
    }
    else {
        tu_so = ps1.tu_so * ps2.mau_so;
        mau_so = ps1.mau_so * ps2.tu_so;
    }
    return 1;
}

int gcd(int a, int b) {
    while (a != b)
        if (a > b) a = a - b;
        else b = b - a;
    return a;
}

void PHANSO::dinh_gia_tri_cho_phan_so() {
    if (mau_so == 1 || mau_so == 0) return;
    if (mau_so < 0) {
        tu_so = -tu_so;
        mau_so = -mau_so;
    }

    int boi = gcd(abs(tu_so), mau_so);
    tu_so = tu_so / boi;
    mau_so = mau_so / boi;
}


void PHANSO::xuat() {
    dinh_gia_tri_cho_phan_so();
    if (tu_so == 0) cout << 0;
    else if (mau_so == 1) cout << tu_so;
    else cout << tu_so << " / " << mau_so;
    cout << "\n";
}