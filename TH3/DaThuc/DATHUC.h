#ifndef DATHUC_H
#define DATHUC_H

#include <iostream>
#include "DONTHUC.h"
using namespace std;

class DONTHUC;

class DATHUC 
{
private:
    int n;
    DONTHUC *donthuc;
    float giatri;
public:
    DATHUC();
    friend class DONTHUC;
    friend istream& operator>>(istream& in, DATHUC& a);
    friend ostream& operator<<(ostream& out, DATHUC a);
    void xuat_donthuc_dau(DONTHUC);
    DATHUC operator + (DATHUC);
    bool operator = (DATHUC);
    void chuanhoa();//sap xep don thuc theo tu tu so mu tang dan
    bool dathuc0();
    float tinh_dathuc(float);// ham tinh gia tri cua da thuc
};

istream& operator>>(istream& in, DATHUC& a);
ostream& operator<<(ostream& out, DATHUC a);
#endif