#include <iostream>
#include <cmath>
using namespace std;

class DaThucB2
{
double a, b, c;
public:
double gia_tri(double x) {return a * pow(x, 2) + b * x + c; }
DaThucB2 operator+(const DaThucB2& other)
{
    DaThucB2 res;
    res.a = other.a + a;
    res.b = other.b + b;
    res.c = other.c + c;
    return res;
}
};