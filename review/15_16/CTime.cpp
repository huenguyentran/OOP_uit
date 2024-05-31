#include <iostream>
//3:40PM-->3h54

using namespace std;

class ThoiGian
{
int gio, phut, giay;
public:
friend istream& operator>> (istream& is, ThoiGian& a);
friend ostream& operator<<(ostream& os, const ThoiGian& a);
bool check()
{
    if(gio < 0 || phut < 0 || giay < 0 || phut > 60 || giay > 60)
        return 0;
    return 1;
}

ThoiGian operator++()//pre
{
    if(giay == 60)
    {
        giay = 1;
        if(phut == 60)
        {
            phut = 1;
            gio++;
        }
        else phut++;
    } else giay++;
    return *this;
}

ThoiGian operator++(int a)
{
    ThoiGian temp;
    temp.gio = gio;
    temp.phut = phut;
    temp.giay = giay;

    if(giay == 59)
    {
        giay = 0;
        if(phut == 59)
        {
            phut = 0;
            gio++;
        }
        else phut++;
    } else giay++;

    return temp;
}
};

istream& operator>> (istream& is, ThoiGian& a)
{
    do 
    {
        cout << "Nhap gio: ";
        is >> a.gio;
        cout << "Nhap phut: ";
        is >> a.phut;
        cout << "Nhap giay: ";
        is >> a.giay;
    } while (!a.check());
    return is;
}

ostream& operator<<(ostream& os, const ThoiGian& a)
{
    os << a.gio << " gio " << a.phut << " phut " << a.giay << "\n";
    return os;
}

int main()
{
    ThoiGian a;
    cin >> a;
    cout << a++;
    cout << ++a;
    return 0;
}