#include "DanhSachXe.h"

int main()
{
	DanhSachXe list;
	list.input();
	list.output();
	
	ofstream file("danh_sach_xe_may.txt");
	if (!file)
	{
		cout << "mo file that bai: ";
		return 1;
	}

	list.ghiDS(file);

	file.close();
	return 0;
}