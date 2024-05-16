#include "SOPHUC.h"

SOPHUC::SOPHUC() {
    phan_ao = 0;
    phan_thuc = 0;
}

SOPHUC::SOPHUC() {}
void SOPHUC::nhapSoPhuc() {
    cout << "nhap so phuc " << endl << "nhap phan thuc: ";
    cin >> phan_thuc;
    cout << "nhap phan ao: ";
    cin >> phan_ao;
}

SOPHUC::~SOPHUC() {}

void SOPHUC::dinh_gia_triSoPhuc(float a, float b) {
    phan_thuc = a;
    phan_ao = b;
}

void SOPHUC::xuatSoPhuc() {
    cout << "xuat so phuc: " << phan_thuc;
    if (phan_ao < 0) cout << " - " << abs(phan_ao) << "i" << endl;
    else if (phan_ao == 0) cout << endl;
    else cout << " + " << phan_ao << "i" << endl;
}


void SOPHUC::congSoPhuc(SOPHUC sp1, SOPHUC sp2) {
    phan_thuc = sp1.phan_thuc + sp2.phan_thuc;
    phan_ao = sp1.phan_ao + sp2.phan_ao;
}

void SOPHUC::truSoPhuc(SOPHUC sp1, SOPHUC sp2) {
    phan_thuc = sp1.phan_thuc - sp2.phan_thuc;
    phan_ao = sp1.phan_ao - sp2.phan_ao;
}

void SOPHUC::nhanSoPhuc(SOPHUC sp1, SOPHUC sp2) {
    phan_thuc = sp1.phan_thuc * sp2.phan_thuc - sp1.phan_ao * sp2.phan_ao;
    phan_ao = sp1.phan_thuc * sp2.phan_ao + sp1.phan_ao * sp2.phan_thuc;
}

bool SOPHUC::chiaSoPhuc(SOPHUC sp1, SOPHUC sp2) {
    if (sp2.phan_ao == 0 && sp2.phan_thuc == 0)
    {
        cout << "khong chia duoc\n";
        return 0;
    }
    phan_thuc = (sp1.phan_thuc * sp2.phan_thuc - sp1.phan_ao * sp2.phan_ao) / (sp2.phan_thuc * sp2.phan_thuc + sp2.phan_ao * sp2.phan_ao);
    phan_ao = (sp1.phan_ao * sp2.phan_thuc - sp1.phan_thuc * sp2.phan_ao) / (sp2.phan_thuc * sp2.phan_thuc + sp2.phan_ao * sp2.phan_ao);
    return 1;
}
