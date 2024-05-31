#include "TaiNguyen.h"

void TaiNguyen::nhaptaiNguyen()
{
	cout << "Nhap URL: ";
	cin >> filename;
	cout << "Nhap tieu de: ";
	cin >> tieuDe;
	cout << "Nhap mo ta noi dung: ";
	cin.ignore();
	getline(cin, mtnoiDung);
}

string TaiNguyen::HienThi()
{
	stringstream s;
	s << "Tieu de: " << tieuDe << "\n" << "Mo ta nd: " << mtnoiDung << "\n";
	return s.str();

}
