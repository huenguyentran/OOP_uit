#include "TamGiac.h"
#include "TuGiac.h"
#include "HinhBinhHanh.h"
#include "HinhChuNhat.h"
#include "HinhVuong.h"


using namespace std;


int main()
{
	DaGiac* da_giac = NULL;
	int chon = 0;
	
	while (chon != 1 && chon != 2 && chon != 3 && chon != 4 && chon != 5)
	{
		cout << "-------------------\n1_nhap tam giac: \n"
				<< "2_nhap tu giac: \n"
				<< "3_nhap hinh binh hanh: \n"
				<< "4_nhap hinh chu nhat: \n"
				<< "5_nhap hinh vuong: \n";
		cin >> chon;

		switch (chon)
		{
		case 1:
			da_giac = new TamGiac;
			break;
		case 2:
			da_giac = new TuGiac;
			break;
		case 3:
			da_giac = new HinhBinhHanh;
			break;
		case 4: 
			da_giac = new HinhChuNhat;
			break;
		case 5:
			da_giac = new HinhVuong;
			break;
		default:
			cout << "chi nhap 1, 2, 3, 4, 5, nhap lai: \n";
		}
	}

	if (da_giac == NULL) return 1;

	da_giac->nhap();
	da_giac->xuat();
	cout << endl;

	da_giac->tinhTien();
	cout << "DA GIAC SAU KHI TINH TIEN\n";
	da_giac->xuat();


	return 0;
}