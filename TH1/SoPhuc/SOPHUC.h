#pragma once
#include <iostream>
using namespace std;

class SOPHUC {
private:
    float phan_thuc, phan_ao;
public:
    SOPHUC();
    ~SOPHUC();
    void nhapSoPhuc();
    void dinh_gia_triSoPhuc(float a, float b);
    void xuatSoPhuc();
    void congSoPhuc(SOPHUC sp1, SOPHUC sp2);
    void truSoPhuc(SOPHUC sp1, SOPHUC sp2);
    void nhanSoPhuc(SOPHUC sp1, SOPHUC sp2);
    bool chiaSoPhuc(SOPHUC sp1, SOPHUC sp2);
};


