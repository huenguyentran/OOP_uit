#include "DaGiac.h"
DaGiac::DaGiac()
{
	dsDinh.resize(0);
	canh_.resize(0);
	so_dinh = 0;
}
DaGiac::~DaGiac()
{
	for (int i = 0; i < so_dinh; i++)
	{
		if (dsDinh[i] != NULL)
			delete dsDinh[i];
		if (canh_[i] != NULL)
			delete canh_[i];
	}
}

void DaGiac::nhap()
{
	if (so_dinh == 0)
	{
		std::cout << "nhap so dinh cua da giac: ";
		std::cin >> so_dinh;
	}
	Diem* temp;
	for (int i = 0; i < so_dinh; i++)
	{
		temp = new Diem;
		std::cout << "nhap diem thu " << i + 1 
				<< "\nnhap hoanh do x: ";
		std::cin >> temp->x;
		std::cout << "nhap tung do y: ";
		std::cin >> temp->y;

		dsDinh.push_back(temp);
		temp = NULL;
	}
}


void DaGiac::xuat()
{
	for (int i = 0; i < so_dinh; i++)
	{
		std::cout << "(" << dsDinh[i]->x << ", " << dsDinh[i]->y << ")\t";
	}
}

bool DaGiac::tinhTien()
{

	int a, b;
	std::cout << "nhap diem cuoi vecto tinh tien: \nnhap x: ";
	std::cin >> a;
	std::cout << "nhap y: "; 
	std::cin >> b;
	if (a == 0 && b == 0)
	{
		std::cout << "khong tinh tien duoc \n";
		return 0;
	}
	for (int i = 0; i < so_dinh; i++)
	{
		dsDinh[i]->x += a;
		dsDinh[i]->y += b;
	}
	return 1;
}

void DaGiac::set_canh()
{
	canh_.resize(so_dinh);
	for (int i = 0; i < so_dinh; i++)
	{
		canh_[i] = new vectorCanh;
		canh_[i]->dau.x = dsDinh[i]->x;
		canh_[i]->dau.y = dsDinh[i]->y;
		int j;
		if (i == so_dinh - 1) j = 0;
		else j = i + 1;
		canh_[i]->cuoi.x = dsDinh[j]->x;
		canh_[i]->cuoi.y = dsDinh[j]->y;
	}

}