#include "DanhSach.h"
#include "QVDauLinh.h"
#include "QVThongThuong.h"

DanhSach::~DanhSach()
{
	for (int i = 0; i < so_luongNC; i++)
		delete pNguoiChoi[i];
	pNguoiChoi.resize(0);

	for (int i = 0; i < so_luongQV; i++)
		delete pQuaiVat[i];
	pQuaiVat.resize(0);
}

void DanhSach::nhap_ds()
{
	cout << "NHAP QUAI VAT\n";
	cout << "Nhap so luong quai vat: ";
	cin >> so_luongQV;
	pQuaiVat.resize(so_luongQV);
	for (int i = 0; i < so_luongQV; i++)
	{
		cout << "nhap quai vai thu " << i + 1 << "\n";
		int chon;
		cout << "0_Dau linh, 1_Thong thuong: ";
		cin >> chon;
		switch (chon)
		{
		case 0:
			pQuaiVat[i] = new QVDauLinh;
			break;
		case 1:
			pQuaiVat[i] = new QVThongThuong;
			break;
		default:
			i--;
			continue;
		}
		pQuaiVat[i]->nhap();
		pQuaiVat[i]->tinh_sat_thuong();
	}

	cout << "NHAP NGUOI CHOI\n";
	cout << "Nhap so luong nguoi choi: ";
	cin >> so_luongNC;
	pNguoiChoi.resize(so_luongNC);
	for (int i = 0; i < so_luongNC; i++)
	{
		cout << "nhap nguoi choi thu " << i + 1 << "\n";
		pNguoiChoi[i] = new NhanVat;
		pNguoiChoi[i]->nhap();
		pNguoiChoi[i]->tinh_sat_thuong();
	}

}
void DanhSach::xuat_ds()
{
	cout << "DANH SACH QUAI VAT\n";
	for (int i = 0; i < so_luongQV; i++)
	{
		pQuaiVat[i]->xuat();
	}


	cout << "DANH SACH NGUOI CHOI\n";
	for (int i = 0; i < so_luongNC; i++)
	{
		pNguoiChoi[i]->xuat();
	}
}

void DanhSach::ke_manh_nhat()
{
	int tem = 0, NCmax = 0, QVmax = -1;
	for (int i = 0; i < so_luongNC; i++)
	{
		if (tem < pNguoiChoi[i]->tinh_sat_thuong())
		{
			NCmax = i;
			tem = pNguoiChoi[i]->tinh_sat_thuong();
		}
	}

	for (int i = 0; i < so_luongQV; i++)
	{
		if (tem < pQuaiVat[i]->tinh_sat_thuong())
		{
			QVmax = i;
			tem = pQuaiVat[i]->tinh_sat_thuong();
		}
	}

	cout << "~~PHAN TU CO MUC SAT THUONG CAO NHAT\n";
	if (QVmax >= 0)
	{
		cout << "Quai vat ";
		pQuaiVat[QVmax]->xuat();
	}
	else
	{
		cout << "Nguoi choi ";
		pNguoiChoi[NCmax]->xuat();
	}
}


void DanhSach::tuong_tac()
{
	int A_loaipt, A_stt, A_sat_thuong, A_he,
		B_loaipt, B_stt, B_sat_thuong, B_he;
	cout << "~~TUONG TAC~~\n";
	cout << "Chon phan tu A: \n";
	do
	{
		cout << "0_Nguoi choi, 1_Quai vat: ";
		cin >> A_loaipt;
	} while (A_loaipt != 0 && A_loaipt != 1);

	do
	{
		cout << "Nhap stt: ";
		cin >> A_stt;
	} while (A_stt < 0 || A_stt >= ((A_loaipt == 0) ? so_luongNC : so_luongQV));

	if (A_loaipt == 0)
	{
		A_he = pNguoiChoi[A_stt - 1]->he();
		A_sat_thuong = pNguoiChoi[A_stt - 1]->tinh_sat_thuong();
	}
	else
	{
		A_he = pQuaiVat[A_stt - 1]->he();
		A_sat_thuong = pQuaiVat[A_stt - 1]->tinh_sat_thuong();
	}

	cout << "Chon phan tu B: \n";
	do
	{
		cout << "0_Nguoi choi, 1_Quai vat: ";
		cin >> B_loaipt;
	} while (B_loaipt != 0 && B_loaipt != 1);
	do
	{
		cout << "Nhap stt: ";
		cin >> B_stt;
	} while (B_stt < 0 || B_stt >= (B_loaipt == 0) ? so_luongNC : so_luongQV);
	if (B_loaipt == 0)
	{
		B_he = pNguoiChoi[B_stt - 1]->he();
		B_sat_thuong = pNguoiChoi[B_stt - 1]->tinh_sat_thuong();
	}
	else
	{
		B_he = pQuaiVat[B_stt - 1]->he();
		B_sat_thuong = pQuaiVat[B_stt - 1]->tinh_sat_thuong();
	}
	
	if ((A_he + 1) % 5 == B_he) // a->b, a tuong sinh b
	{
		A_sat_thuong += A_sat_thuong * 0.1;
	}
	else if (A_he == (B_he + 1) % 5)
	{
		B_sat_thuong += B_sat_thuong * 0.1;
	}
	else if ((A_he + 2) % 5 == B_he) // a khac-->b
	{
		A_sat_thuong += A_sat_thuong * 0.2;
		B_sat_thuong -= B_sat_thuong * 0.2;
	} 
	else if (A_he == (B_he + 2) % 5)
	{
		B_sat_thuong += B_sat_thuong * 0.2;
		A_sat_thuong -= A_sat_thuong * 0.2;
	}

	cout << "A sat thuong B: " << A_sat_thuong;
	cout << "\nB sat thuong A: " << B_sat_thuong << "\n";

}