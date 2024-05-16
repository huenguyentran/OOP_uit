#include "DATHUC.h"

istream& operator>>(istream& in, DATHUC& x) {
    cout << "nhap so phan tu cua da thuc: ";
    cin >> x.n;
    x.donthuc = new DONTHUC[x.n];
    cout << "nhap tung don thuc cua da thuc \n";
    for (int i = 0; i < x.n; i++)
        cin >> x.donthuc[i];
    x.chuanhoa();
    return in;
}

ostream& operator<<(ostream& out, DATHUC a) {
    cout << "xuat da thuc \n";
    if (a.dathuc0())
    {
        cout << 0;
        return out;
    }
    a.xuat_donthuc_dau(a.donthuc[0]);
    for (int i = 1; i < a.n; i++)
        cout << a.donthuc[i];
    return out;
}

void DATHUC::xuat_donthuc_dau(DONTHUC dthuc_dau)
{
    if (dthuc_dau.somu == 0) {
        if (dthuc_dau.heso != 0) cout << dthuc_dau.heso;
    }
    else if (dthuc_dau.heso == 1) dthuc_dau.xuatmu(dthuc_dau.somu);
    else if (dthuc_dau.heso > 0) {
        cout << dthuc_dau.heso;
        dthuc_dau.xuatmu(dthuc_dau.somu);
    }
    else cout << dthuc_dau;
}

DATHUC::DATHUC()
{
    n = 0;
    donthuc = NULL;
}

bool DATHUC::operator = (DATHUC another) 
{
    if (another.donthuc == NULL) return 0;
    if (donthuc != NULL) delete[] donthuc;
    this->n = another.n;
    donthuc = new DONTHUC[this->n];
    for (int i = 0; i < n; i++)
        donthuc[i] = another.donthuc[i];
    return 1;
}

DATHUC DATHUC::operator + (DATHUC another)
{
    DATHUC kq;
    if (this->donthuc == NULL || another.donthuc == NULL) return kq;
    kq.donthuc = new DONTHUC[this->n + another.n];
    kq.n = 0;
    int i = 0, j = 0;
    while (i < this->n && j < another.n) 
    {
        if (donthuc[i].somu == another.donthuc[j].somu) 
        {
            kq.donthuc[kq.n] = this->donthuc[i] + another.donthuc[j];
            i++; j++; kq.n++;
        }
        else if (this->donthuc[i].somu < another.donthuc[j].somu) 
        {
            kq.donthuc[kq.n] = another.donthuc[j];
            j++; kq.n++;
        }
        else 
        {
            kq.donthuc[kq.n] = this->donthuc[i];
            i++; kq.n++;
        }
    }
    while (i < this->n)
    {
        kq.donthuc[kq.n] = this->donthuc[i];
        i++; kq.n++;
    }
    while (j < another.n) 
    {
        kq.donthuc[kq.n] = another.donthuc[j];
        j++; kq.n++;
    }
    return kq;
}

void DATHUC::chuanhoa()// cac don thuc theo thu tu tang dan so mu
{
    for (int i = 0; i < n; i++)
    {//selectionsort
        int c = i;
        for (int j = i + 1; j < n; j++)
            if (donthuc[c].somu < donthuc[j].somu)
                c = j;
        if (c == i) continue;
        else 
        {
            DONTHUC temp;
            temp = donthuc[c];
            donthuc[c] = donthuc[i];
            donthuc[i] = temp;
        }
    }
    int i = 0;
    while (i < n)
    {
        if (donthuc[i].somu == donthuc[i + 1].somu)
        {
            donthuc[i].heso += donthuc[i + 1].heso;
            n--;
            for (int j = i + 1; j < n; j++)
                donthuc[j] = donthuc[j + 1];
        }
        i++;
    }
}

bool DATHUC::dathuc0()
{
    for (int i = 0; i < n; i++)
        if (!donthuc[i].DONTHUC0()) return 0;
    return 1;
}

float DATHUC::tinh_dathuc(float a)
{
    float sum = 0;
    for (int i = 0; i < n; i++) {
        donthuc[i].x = a;
        sum += donthuc[i].tinh_donthuc();
    }
    return sum;
}