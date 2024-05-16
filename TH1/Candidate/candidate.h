#pragma once
#include <iostream>
#include <string>
#include "DATE.h"
using namespace std;

class candidate 
{
private:
    string ma, ten; 
    DATE ngay_sinh;
    float diem_toan, diem_van, diem_anh, diem_tong;
public:
    candidate();
    ~candidate();
    void tinh_tong() {
        diem_tong = diem_toan + diem_anh + diem_van;
    }
    float lay_tong() { return diem_tong; }
    void input();
    void output();
};


