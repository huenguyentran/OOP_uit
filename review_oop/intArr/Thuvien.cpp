#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;


class SACH
{
string maSach, tenSach, NXB;
protected:
int soLuong, donGia;
public:
virtual void nhap()
{
    cout << "Nhap ma sach: ";
    cin >> maSach;
    cout << "Nhap ten sach: ";
    cin.ignore();
    getline(cin, tenSach);
    cout << "Nhap nha xuat ban: ";
    cin.ignore();
    getline(cin, NXB);
    cout << "Nhap so luong: ";
    cin >> soLuong;
    cout << "Nhap don gia: ";
    cin >> donGia;
}
string NhaXB(){return NXB;}
virtual string tostring()
{
    stringstream s;
    s << maSach << " - " << tenSach << " - NXB: "<< NXB
        << "\t" << soLuong << "\t" << donGia << "\t"; 
    return s.str();
}
virtual bool la_SGK() = 0;
virtual double ThanhTien() = 0;

virtual void xuat(ofstream&) = 0;

};

class SGK : public SACH
{
enum TINHTRANG{CU, MOI};
int tinhTrang;
public:
void nhap()
{
    SACH ::nhap();
    do{
        cout << "Nhap tinh trrang: 0_cu, 1_moi: ";
        cin >> tinhTrang;
    }while(tinhTrang != 0 && tinhTrang != 1);
}
bool la_SGK() {return 1;}
double ThanhTien()
{
    switch(tinhTrang)
    {
        case CU:
        return soLuong * donGia * 0.5;
        case MOI:
        return soLuong * donGia;
        default:
        return 0;
    }
}

string tostring()
{
    stringstream s;
    s << SACH::tostring();
    s << "\t tinh trang: " << ((tinhTrang) ? "MOI" : "CU") << "\t" << "Thanh tien: " << ThanhTien() << "\n";
    return s.str();
}

void xuat(ofstream& file)
{
    if(file)
    {
        file << tostring();
    }
}

};


class SThamKhao:public SACH
{
int tienThue;
public:
void nhap()
{
    SACH::nhap();
    cout << "Nhap tien thue: ";
    cin >> tienThue;
}
bool la_SGK() {return 0;}
double ThanhTien()
{
    return soLuong * donGia + tienThue;
}

string tostring()
{
    stringstream s;
    s << SACH::tostring() << "Thanh tien: " << ThanhTien();
    return s.str(); 
}

void xuat(ofstream& file)
{
    if(file)
    {
        file << tostring();
    }
}
};


class QuanLyTV
{
SACH** pSach;
int soLuongSach;
public:
void input()
{
    cout << "Nhap so luong sach: ";
    cin >> soLuongSach;
    pSach = new SACH*[soLuongSach];
    int chon = 0;
    for(int i = 0; i < soLuongSach; i++)
    {
        cout << "NHAP SACH THU " <<i + 1 << "\n";
        do{
            cout << "0_SGK, 1_S tham khao: ";
            cin >> chon;
        }while(chon != 0 && chon != 1);

        if(chon == 0)
            pSach[i] = new SGK;
        else pSach[i] = new SThamKhao;
        pSach[i]->nhap();
    }

}
void output(ofstream& file)
{
    for(int i = 0; i  < soLuongSach; i++)
    {
        pSach[i]->xuat(file);
    }
}

void ThanhTienItnhat(ofstream& file)
{
    if(file) file << "\nSACH THANH TIEN IT NHAT: \n";
    double x = 0;
    for(int i = 0; i < soLuongSach; i++)
    {
        if(x < pSach[i]->ThanhTien()) 
            x = pSach[i]->ThanhTien();
    }

    for(int i = 0; i <soLuongSach; i++)
    {
        if(x == pSach[i]->ThanhTien())
            pSach[i]->xuat(file);
    }
}

void inSGK(ofstream& file)
{
    string NXB;
    cout << "Nhap ten NXB: ";
    cin >> NXB;
    for(int i = 0; i < soLuongSach; i++)
    {
        if(pSach[i]->NhaXB() == NXB && pSach[i]->la_SGK())
        {
            pSach[i]->xuat(file);
        }
    }
}

~QuanLyTV()
{
    for(int i = 0; i < soLuongSach; i++)
        delete pSach[i];
    delete pSach;
}
};

int main()
{
    QuanLyTV a;
    a.input();
    ofstream file("output.txt");
    a.output(file);
    a.inSGK(file);
    a.ThanhTienItnhat(file);
    file.close();
    return 0;
}

