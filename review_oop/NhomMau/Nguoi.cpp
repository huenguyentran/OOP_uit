#include "Nguoi.h"
bool Nguoi::DiTruyen(Nguoi cha, Nguoi me)
{
	if (this->nhomMau.DiTruyen(cha.nhomMau, me.nhomMau))
		return 1;
	return 0;
}
bool Nguoi::CoTheChoMau(Nguoi* other)
{
	if (this->nhomMau.CoTheCho(other->nhomMau))
		return 1;
	return 0;
}

void Nguoi::nhap()
{
	cout << "Nhap ten: ";
	cin.ignore();
	getline(cin, ten);

	cout << "NHAP NHOM MAU\n";
	nhomMau.nhap();

}

string Nguoi::tostring()
{
	stringstream s;
	s << ten << "\t" << nhomMau.tostring() << "\n";
	return s.str();
}