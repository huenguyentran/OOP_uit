#pragma once
#include <iostream>
#include <algorithm>
//using namespace std;

class IntSet {
private:
    int* values_ = NULL;// danh sach gia tri
    int count_;//so luong phan tu
public:
    IntSet();
    IntSet(const IntSet&);
    IntSet(int*, int);
    ~IntSet();
    friend std::istream& operator >> (std::istream& in, IntSet& a);
    friend std::ostream& operator << (std::ostream& out, IntSet a);

    IntSet operator=(const IntSet& another);
    IntSet operator+(const IntSet another);//unionss
    IntSet operator-(const IntSet another);//diff
    int& operator[](int index);

    void chuanhoa(int*, int&);
    int operator==(const IntSet& another) const;//cmp

};

std::istream& operator >> (std::istream& in, IntSet& a);
std::ostream& operator << (std::ostream& out, IntSet a);

