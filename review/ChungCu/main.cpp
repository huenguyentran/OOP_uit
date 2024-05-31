#include "QuanLy.h"
// begin 4:19----finish: 5:07---> time:
int main()
{
	QuanLy danh_sach;
	danh_sach.nhap();
	danh_sach.xuat();

	cout << "So tien moi thang ban quan li nhan: " << danh_sach.tinhTien() << " trieu";
	return 0;

}