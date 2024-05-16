#include "candidate.h"

candidate::candidate() {}
candidate::~candidate() {}

void candidate::input() {
    cout << "nhap TS: " << endl;
    cout << "Ma: "; cin >> ma;
    cout << "Ten: ";
    cin.ignore();
    getline(cin, ten);
    cout << "ngay thang nam sinh: ";
    ngay_sinh.nhap();
    cout << "diem toan: "; cin >> diem_toan;
    cout << "diem van: "; cin >> diem_van;
    cout << "diem anh: "; cin >> diem_anh;
    tinh_tong();
}

void candidate::output() {
    cout << "ma: " << ma << endl
        <<  "ten: " << ten << endl;
    ngay_sinh.xuat();
    cout << "diem toan: " << diem_toan << endl
        << "diem van: " << diem_van << endl
        << "diem anh: " << diem_anh << endl
        << "diem tong: " << diem_tong << endl;
}