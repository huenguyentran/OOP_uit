#pragma once
#include <iostream>
using namespace std;

class PHANSO {
private:
    int tu_so, mau_so;
public:
    PHANSO();
    ~PHANSO();
    void nhap();
    void cong(PHANSO ps1, PHANSO ps2);
    void tru(PHANSO ps1, PHANSO ps2);
    void nhan(PHANSO ps1, PHANSO ps2);
    bool chia(PHANSO ps1, PHANSO ps2);
    void dinh_gia_tri_cho_phan_so();
    void xuat();
};

