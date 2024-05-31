#include <iostream>
#include <string>
#include <vector>
using namespace std;
//7h36---> 9:00PM,   10:25-->10:40

class SanPham
{
string maSo, tieuDe;
double giaBan;
public:
virtual void nhap()
{
    cout << "NHAP SAN PHAM\n";
    cout << "Nhap ma so san pham: ";
    cin >> maSo;
    cout << "Nhap tieu de : ";
    cin.ignore();
    getline(cin, tieuDe);
    cout << "Nhap gia ban: ";
    cin >> giaBan;
}

void xuat()
{
    cout << maSo << "\n" << tieuDe << "\nGia ban: " << giaBan << "\n";
}

double gia_ban() {return giaBan;}

};

class TranhAnh : public SanPham
{
string chieuRong, chieuCao, tenHoaSi;
public:
void nhap()
{
    SanPham::nhap();
    cout << "Nhap chieu rong: ";
    cin >> chieuRong;
    cout << "Nhap chieu cao: ";
    cin >> chieuCao;
    cout << "Nhap ten hoa si: ";
    cin.ignore();
    cin >> tenHoaSi;

}

void xuat()
{
    SanPham::xuat();
    cout << "Khich thuoc: " << chieuRong << " - "  << chieuCao;
    cout << "\nTen hoa si: " << tenHoaSi << "\n";  
}
    
};

class CDAmNhac : public SanPham
{
string tenCaSi, tenDonVisx;
public:
void nhap()
{
    SanPham::nhap();
    cout << "Nhap ten ca si: ";
    cin.ignore();
    getline(cin, tenCaSi);
    cout << "Nhap don vi san xuat: ";
    //cin.ignore();
    getline(cin, tenDonVisx);
}

void xuat()
{
    SanPham::xuat();
    cout << "ten ca si: " << tenCaSi;
    cout << "ten don vi: " << tenDonVisx << "\n";
}
};

class KhachHang
{
private:
string maKhachHang, sdt, tenKhachHang;
public:
string Ma_KH(){return maKhachHang;}
void nhap()
{
    cout << "Nhap ma khach hang: ";
    cin >> maKhachHang;
    cout << "Nhap ten khach hang: ";
    cin.ignore();
    getline(cin, tenKhachHang);
    cout << "Nhap sdt: ";
    cin >> sdt; 
}

void xuat()
{
    cout << "THONNG TIN KHACH HANG";
    cout << maKhachHang << "\n"
        << tenKhachHang << "\n"
        << sdt << "\n";
}
};


class HoaDon
{
string maHoaDon, ngaylapHD;
vector <SanPham*> danhsachSP;
double tongGia;
KhachHang ttKhachHang;
public:
HoaDon() {}
HoaDon(const HoaDon& a)
{
    danhsachSP.resize(a.danhsachSP.size());
    for(int i = 0; i < a.danhsachSP.size(); i++ )
    {
        danhsachSP[i] = a.danhsachSP[i];
    }
}
~HoaDon()
{
    for(int i = 0; i < danhsachSP.size(); i++)
        delete danhsachSP[i];
    danhsachSP.resize(0);
}

KhachHang TT_KhachHang() {return ttKhachHang;}
void nhap()
{
    int so_sp, chon;
    cout << "Nhap ma hoa don: ";
    cin >> maHoaDon;
    cout << "Ngay lap hoa don: ";
    cin >> ngaylapHD;
    ttKhachHang.nhap();
    cout << "Nhap so luong san pham: ";
    cin >> so_sp;
    danhsachSP.resize(so_sp);
    for(int i = 0; i < so_sp; i++ )
    {
        cout << "0_Tranh anh, 1_CD am nhac: ";
        cin >> chon;
        switch(chon)
        {
            case 0:
            danhsachSP[i] = new TranhAnh;
            break;
            case 1:
            danhsachSP[i] = new CDAmNhac;
            break;
            default:
            {
                i--;
                continue;
            }
        }
        danhsachSP[i]->nhap();
    }
}

double tong_gia()
{
    tongGia = 0;
    for(int i = 0; i < danhsachSP.size(); i++)
        tongGia += danhsachSP[i]->gia_ban();
    return tongGia;
}

void xuat()
{
    cout << maHoaDon << "\n" << ngaylapHD << "\n";
    cout << "THONG TIN KHACH HANG\n";
    ttKhachHang.xuat();
    cout << "DANH SACH SAN PHAM\n";
    for(int i = 0; i < danhsachSP.size(); i++)
        danhsachSP[i]->xuat();
    cout << "Tong gia tri hoa don: " << tong_gia();
}
};

class QuanLy
{
    vector <HoaDon> danhsachHoaDon;
    double thuNhap;
    vector <KhachHang> danhsachKH;
    vector <double> giatriHoaDonKH;
public:
void input()
{
    int temp = -1;
    while(1)
    {
        cout << "1_them 1 hoa don, 0_thoat nhap: ";
        cin >> temp;
        if(temp == 0) return;

        HoaDon a;
        a.nhap();
        danhsachHoaDon.push_back(a);
    }
}
double TongThuNhap()
{
    thuNhap = 0;
    for(int i = 0; i < danhsachHoaDon.size(); i++)
    {
        thuNhap += danhsachHoaDon[i].tong_gia();
    }
    cout << "TONG THU NHAP: " << thuNhap << "\n";
    return thuNhap;
}

double KhachHangMuaNhieuNhat()
{
    for(int i = 0; i < danhsachKH.size(); i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(danhsachKH[j].Ma_KH() == danhsachHoaDon[i].TT_KhachHang().Ma_KH())
            {
                giatriHoaDonKH[j] += danhsachHoaDon[i].tong_gia();
            }
            else
            {
                danhsachKH.push_back(danhsachHoaDon[i].TT_KhachHang());
                giatriHoaDonKH[j] = danhsachHoaDon[i].tong_gia();
            }
        }
    }
    vector <int> i_max = {0};
    for(int i = 1; i < danhsachKH.size(); i++)
    {
        if(giatriHoaDonKH[i] > giatriHoaDonKH[i_max.at(0)])
        {
            i_max.resize(0);
            i_max.push_back(i);
        }
        else if(giatriHoaDonKH[i] == giatriHoaDonKH[i_max.at(0)])
            i_max.push_back(i);
    }

    cout << "CAC KHACH HANG MUA NHIEU NHAT\n";
    for(int i = 0; i < i_max.size(); i++)
    {
        danhsachKH[i].xuat();
    }
    return 0;
}
};
int main()
{
    QuanLy cong_ty;
    cong_ty.input();
    cong_ty.TongThuNhap();
    cong_ty.KhachHangMuaNhieuNhat();
    return 0;
}

