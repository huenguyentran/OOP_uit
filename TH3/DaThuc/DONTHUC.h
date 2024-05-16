#ifndef DONTHUC_H
#define DONTHUC_H
#pragma once
#include <iostream>
#include "DATHUC.h"
using namespace std;

class DATHUC;

class DONTHUC 
{
private:
    double heso, x = 0;
    int somu;//ax^b
public:
    friend class DATHUC;
    friend istream& operator >> (istream& in, DONTHUC& a);
    friend ostream& operator << (ostream& out,const DONTHUC a);
    DONTHUC();
    DONTHUC(int);
    DONTHUC operator+(const DONTHUC);
    bool operator=(const DONTHUC);
    bool DONTHUC0();
    void xuatmu(int);
    void xuatheso(double n);
    float tinh_donthuc();
};

istream& operator >> (istream& in, DONTHUC& a);
ostream& operator << (ostream& out, const DONTHUC a);
#endif