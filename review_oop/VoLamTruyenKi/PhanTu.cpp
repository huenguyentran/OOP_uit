#include "PhanTu.h"
PhanTu::PhanTu()
{
	hanh = NULL;
}
void PhanTu::nhap()
{
	cout << "Nhap ten: ";
	cin.ignore();
	getline(cin, ten);
	cout << "Nhap cap do: ";
	cin >> capDo;
	int temp;
	do
	{
		cout << "Nhap he: 1_Kim, 2_Moc, 3_thuy, 4_hoa, 5_tho: ";
		cin >> temp;
		switch (temp)
		{
		case 1:
			hanh = new HeKim;
			break;
		case 2:
			hanh = new HeMoc;
			break;
		case 3:
			hanh = new HeThuy;
			break;
		case 4:
			hanh = new HeHoa;
			break;
		case 5:
			hanh = new HeTho;
			break;
		default:
			hanh = NULL;
			break;
		}
	}while (hanh == NULL);
}

double PhanTu::tanCong(PhanTu& a)
{
	double num = this->hanh->mucSatThuong(*a.hanh);
	return SatThuong() * num;
}

string PhanTu::tostring()
{
	stringstream s;
	s << ten << "\tCap do: " << capDo << "\tHe: " << hanh->Xuat() << "\t";
	return s.str();
}