#include <iostream>
#include <string>
using namespace std;
class KyHieu
{
protected:
string caoDo, truongDo, kihieuNot = "";
public:
virtual void nhap() = 0;

string CaoDo() {return caoDo;}
string TruongDo() {return truongDo;}
string layNot() {return kihieuNot; }

virtual bool laNotNhac() = 0;

bool caoDolonhon(const KyHieu& a) 
{
    if('C' <= caoDo[0] && caoDo[0] <= 'G')
    {
        if('C' <= a.caoDo[0] && a.caoDo[0] <= 'G')
            return caoDo[0] > a.caoDo[0];
        else return 0;
    }
    else 
    {
        if(a.caoDo[0] == 'A' || a.caoDo[0] == 'B') return caoDo[0] > a.caoDo[0];
        else return 1;
    }
}

};

class DauLang:public KyHieu
{
public:
DauLang(){caoDo = "Z"; kihieuNot = "dau lang "; }
bool laNotNhac() {return 0;}
void nhap()
{
    cout << "NHAP DAU LANG\n";
    do
    {
        int temp;
        cout << "0_au lang tron, 1_dau lang trang, 2_dau lang den, 3_dau lang don, 4_dau lang doi, 5_dau lang ba, 6_dau lang tu: ";
        cin >> temp;
        switch (temp)
        {
        case 0:
            truongDo = "4";
            kihieuNot += "tron";
            return;
        case 1:
            truongDo = "2";
            kihieuNot += "trang";
            return;
        case 2:
            truongDo = "1";
            kihieuNot += "den";
            return;
        case 3:
            truongDo = "1/2";
            kihieuNot += "don";
            return;
        case 4:
            truongDo = "1/4";
            kihieuNot += "doi";
            return;
        case 5:
            truongDo = "1/8";
            kihieuNot += "ba";
            return;
        case 6:
            truongDo = "1/16";
            kihieuNot += "tu";
            return;
        default:
            break;
        }
    } while (1);
}

};

class NotNhac:public KyHieu
{
public:


bool laNotNhac() {return 1;}
void nhap()
{
    cout << "NHAP NOT NHAC \n";
    do
    {
        cout << "CAO DO:\nC_do, D_re, E_mi, F_fa, G_sol, A_la, B_si: ";
        cin >> caoDo;
        caoDo[0] = toupper(caoDo[0]);
        switch(caoDo[0])
        {
            case 'C':
                kihieuNot = "do ";
                break;
            case 'D':
                kihieuNot = "re "; 
                break;
            case 'E':
                kihieuNot = "mi ";
                break;
            case 'F':
                kihieuNot = "fa  ";
            case 'G':
                kihieuNot = "sol ";
                break;
            case 'A':
                kihieuNot = "la  ";
                break;
            case 'B':
                kihieuNot = "Si ";
                break;
            default: continue;
        }
    } while (0);
    do
    {
        int temp;
        cout << "TRUONG DO:\n0_Not tron, 1_Not trang, 2_Not den, 3_not moc don, 4_not moc kep, 5_not moc tam, 6_not moc tu: ";
        cin >> temp;
        switch(temp)
        {
            case 0:
                truongDo = "4";
                kihieuNot += "tron";
                return;
            case 1:
                truongDo = "2";
                kihieuNot += "trang";
                return;
            case 2:
                truongDo = "1";
                kihieuNot += "den";
                return;
            case 3:
                truongDo = "1/2";
                kihieuNot += "moc don";
                return;
            case 4:
                truongDo = "1/4";
                kihieuNot += "moc kep";
                return;
            case 5:
                truongDo = "1/8";
                kihieuNot += "moc tam";
                return;
            case 6:
                truongDo = "1/16";
                kihieuNot += "moc tu";
                return;
            default:
                cout << "NHAP LAI: \n";
                break;
        }
    } while (1);
}

};

class BanNhac
{
KyHieu** pKyHieu;
int soKiHieu;
public:
void input()
{
    cout << "Nhap so ky hieu am nhac: ";
    cin >> soKiHieu;
    pKyHieu = new KyHieu*[soKiHieu];
    int temp;
    for(int i = 0; i < soKiHieu; i++)
    {
        do
        {
            cout << "1_not nhac, 2_dau lang: ";
            cin >> temp;
        } while (temp != 1 && temp != 2);
        
        if(temp == 1) 
            pKyHieu[i] = new NotNhac;
        else pKyHieu[i] = new DauLang;
        pKyHieu[i]->nhap();
    }
}

void output()
{
    cout << "Xuat ban nhac!!!\n";
    for(int i = 0; i < soKiHieu; i++)
    {
        cout << pKyHieu[i]->layNot() << "\t";
        if(i % 10 == 0 && i != 0) cout << "\n";
    }
}

int soLangDen()
{
    int res = 0;
    for(int i = 0 ; i < soKiHieu; i++)
    {
        if(pKyHieu[i]->layNot() == "dau lang den") res++;
    }
    cout << "SO DAU LANG DEN: " << res << "\n";
    return res;
}


int coCaoDoCaoNhat()
{
    int temp = 0;
    while(pKyHieu[temp]->laNotNhac()) 
        temp++;
    for(int i = temp + 1; i < soKiHieu; i++)
    {
        if(pKyHieu[i]->laNotNhac())
        {
            if(pKyHieu[i]->caoDolonhon(*pKyHieu[temp]))
                temp = i;
        }
    }
    cout << "\nCao do lon nhat: " << pKyHieu[temp]->layNot();
    return temp;
}

};

int main() 
{
    BanNhac ban_nhac;
    ban_nhac.input();
    ban_nhac.output();
    ban_nhac.coCaoDoCaoNhat();
    return 0;
}