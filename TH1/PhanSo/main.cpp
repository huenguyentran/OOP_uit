#include "PHANSO.h"


int main() {
    PHANSO A, B;
    cout << "nhap phan so thu nhat: \n";
    A.nhap();
    cout << "nhap phan so thu hai: \n";
    B.nhap();
    PHANSO C;

    C.cong(A, B);
    cout << "tong: ";
    C.xuat();

    C.tru(A, B);
    cout << "hieu: ";
    C.xuat();

    C.nhan(A, B);
    cout << "tich ";
    C.xuat();

    C.chia(A, B);
    cout << "thuong: ";
    C.xuat();
    return 0;
}