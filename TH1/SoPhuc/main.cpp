#include "SOPHUC.h"

int main() {
    SOPHUC x, y, z;
    x.nhapSoPhuc();
    y.nhapSoPhuc();

    z.congSoPhuc(x, y);
    cout << "cong hai so phuc " << endl;
    z.xuatSoPhuc();

    z.truSoPhuc(x, y);
    cout << "tru hai so phuc " << endl;
    z.xuatSoPhuc();

    z.nhanSoPhuc(x, y);
    cout << "nhan hai so phuc " << endl;
    z.xuatSoPhuc();

    z.chiaSoPhuc(x, y);
    cout << "chia hai so phuc " << endl;
    z.xuatSoPhuc();
    return 0;

}

