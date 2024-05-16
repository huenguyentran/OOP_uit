
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
using namespace std;

class QuanLy;
class KhachHang;
class SanPham;

class KhachHang
{
    string ma_khachHang, ten, diaChi, sdt;
public:
    void nhap();
    string tostring() const;
};
void KhachHang::nhap()
{
    cout << "Ma khach hang: ";
    cin.ignore();
    getline(cin, ma_khachHang);
    cout << "Nhap ten khach hang: ";
    cin.ignore();
    getline(cin, ten);
    cout << "Nhap dia chi: ";
    cin >> diaChi;
    cout << "Nhap so dien thoai: ";
    cin >> sdt;
}

string KhachHang::tostring() const
{
    stringstream s; // sstream library
    s << "Ma khach hang: " << ma_khachHang << "\n"
       << "Ten khach hang: " << ten << "\n"
       << "Dia chi: " << diaChi << "\n"
       << "So dien thoai " << sdt << "\n";
    return s.str();
}
// dem enum vao header file
enum LIST_NUOC_HOA {HOAHONG, HOACUC};
enum LIST_DAU_GOI {TOCKHO, TOCDAU_loai1, TOCDAU_loai2};
enum LIST_SUA_TAM {DAKHO, DANHON};
enum LIST_SAN_PHAM {NUOCHOA, DAUGOI, SUATAM, DACOSAN};
class SanPham
{
public:
    void nhap(int a);
    void setType(int a) {loaiSP_ = a;}
    void setSP(int dang_sp, int loai_sp) {dangSP_ = dang_sp; loaiSP_ = loai_sp; }
    int tinh_dongiasp();
    string tostring();
private:
    string maSosp;
    int dangSP_; // nuoc hoa, dau goi, sua tam
    int loaiSP_;
    int dungTich, donGiasp;
};
void SanPham::nhap(int a)
{
    dangSP_ = a; // ddk a da thoa
    switch (dangSP_)
    {
    case NUOCHOA:
        cout << "Nhap nuoc hoa: \n";
        do{
            cout << "0_Hoa hong, 1_Hoa cuc: ";
            cin >> loaiSP_;
        }while(loaiSP_ != 0 && loaiSP_ != 1);
        break;
    case DAUGOI:
        cout << "Nhap dau goi: \n";
        do{
            cout << "0_Toc kho, 1_Toc dau loai 1, 2_Toc dau loai 2: ";
            cin >> loaiSP_;
        } while (loaiSP_ != 0 && loaiSP_ != 1 && loaiSP_ != 2);
        break;
    case SUATAM:
        cout << "Nhap sua tam: \n";
        do{
            cout << "0_Da kho, 1_Da nhon: ";
            cin >> loaiSP_;
        } while(loaiSP_ != 0 && loaiSP_ != 1);
            break;
    case DACOSAN:
        break;
    }

    cout << "Nhap ma so san pham: ";
    cin >> maSosp;

    cout << "Nhap dung tich: ";
    cin >> dungTich;
}

int SanPham::tinh_dongiasp()
{
    switch(dangSP_)
    {
        case NUOCHOA:
            if(loaiSP_ == HOAHONG)
                return donGiasp = dungTich * 20;
            else return donGiasp = dungTich * 15;
        case DAUGOI:
            if(loaiSP_ == TOCKHO)
                return donGiasp = dungTich * 20;
            else if(loaiSP_ == TOCDAU_loai1)
                return donGiasp = dungTich * 30;
            else return donGiasp = dungTich * 40;
        case SUATAM:
            if(loaiSP_ == DAKHO)
                return donGiasp = dungTich * 20;
            else return donGiasp = dungTich * 40;
    }
    return 0;
}
string SanPham::tostring()
{
    tinh_dongiasp();
    stringstream s;
    s << maSosp << " - " << loaiSP_ << " - " << dungTich << " (ml) - " << donGiasp;
    return s.str();  
}


class GoiSP
{
private:
    string ttMaGoi, ten_goiSP;
    int giaGoi, loaiGoi;
    int tong_gia_tri_goi;
    SanPham nuocHoa, dauGoi, suaTam;
public: 
    enum LOAIGOI {ROMANTIC, FRESH_AIR};
    GoiSP(int loai_goi, string tt_ma_goi, int nuoc_hoa, int dau_goi, int sua_tam);
    GoiSP();

    int tinh_giatri();
    void nhap();
    string tostring();
};

GoiSP::GoiSP(int loai_goi, string tt_ma_goi, int nuoc_hoa, int dau_goi, int sua_tam)
{
    loaiGoi = loai_goi;
    ttMaGoi = tt_ma_goi;
    nuocHoa.setType(nuoc_hoa);
    dauGoi.setType(dau_goi);
    suaTam.setType(sua_tam);
}
GoiSP::GoiSP()
{
    ttMaGoi = "";
}

void GoiSP::nhap()
{
    cout << "Nhap ten goi: \n";
    cin.ignore();
    getline(cin, ten_goiSP);
    do{
        cout << "0_Romantic, 1_Fresh-Air: ";
        cin >> loaiGoi;
    } while (loaiGoi != 0 && loaiGoi != 1);

    cout << "Nhap ma so goi: ";
    cin >> ttMaGoi;

    if(loaiGoi == FRESH_AIR)
    {
        nuocHoa.nhap(NUOCHOA);
    } else if(loaiGoi == ROMANTIC) 
    {
        nuocHoa.nhap(DACOSAN);
        nuocHoa.setSP(NUOCHOA, HOAHONG);
    }
        
    
    if(loaiGoi == ROMANTIC)
    {
        dauGoi.nhap(DAUGOI);
    } else if(loaiGoi == FRESH_AIR)
    {
        dauGoi.nhap(DACOSAN);
        dauGoi.setSP(DAUGOI, TOCKHO);
    } 

    suaTam.nhap(SUATAM);
}
int GoiSP::tinh_giatri()
{
    return tong_gia_tri_goi = nuocHoa.tinh_dongiasp() + dauGoi.tinh_dongiasp() + suaTam.tinh_dongiasp();
}

string GoiSP::tostring()
{
    stringstream s;
    s << "GOI SAN PHAM: " << ttMaGoi << "\n"
         << "Loai goi: " << loaiGoi << "\n"
         << "Ten goi san pham: " << ten_goiSP << "\n"
         << "Tong gia tri goi: " << tong_gia_tri_goi << "\n"
      << "Nuoc hoa: " << nuocHoa.tostring() << "\n" 
      << "Dau goi: " << dauGoi.tostring() << "\n"
      << "Sua tam: " << suaTam.tostring() << "\n";
    return s.str();
}

class DonHang
{
private:
    string ma_donHang, ngay_lapHDon;
    int gia_donHang;
    GoiSP goi_;
    KhachHang khach_hang_;
public:
    void nhap();
    string tostring();
};

void DonHang::nhap()
{
    cout << "nhap ma don hang: ";
    cin >> ma_donHang;
    cout << "Ngay lap don hang: ";
    cin >> ngay_lapHDon;
    khach_hang_.nhap();    
    goi_.nhap();
}

string DonHang::tostring()
{
    stringstream s;
    s << "Don hang: " << ma_donHang << "\n"
      << "Ngay lap don hang: " << ngay_lapHDon << "\n"
      << "Gia tri don hang: " << gia_donHang << "\n"
      << "Thong tin khach hang\n" << khach_hang_.tostring()
      << "Goi san pham\n" << goi_.tostring();
    return s.str();
}

class QuanLy
{
    vector <DonHang*> pDonhang;
    int soDonhang;
    public:
        void nhap();
        void xuat(string );
};
void QuanLy::nhap()
{
    cout << "Nhap so don hang: ";
    cin >> soDonhang;
    pDonhang.resize(soDonhang);
    for(int i = 0; i < soDonhang; i++)
    {
        pDonhang[i] = new DonHang;
        pDonhang[i]->nhap();
    }
}
void QuanLy::xuat(string file)
{
    ofstream f(file);
    if(!f)
    {
        cout << "mo file that bai!!";
        return;
    }

    for(int i = 0 ; i <soDonhang; i++)
    {
        f << "XUAT DON HANG THU " << i << "\n";
        f << pDonhang[i]->tostring();
        f << "----------------------";
    }
    f.close();
}


int main()
{
    QuanLy ds_donhang;
    ds_donhang.nhap();
    ds_donhang.xuat("danh_sach.txt");
    return 0;
}

