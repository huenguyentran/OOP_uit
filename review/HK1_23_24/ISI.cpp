#include "ISI.h"

ISI::ISI()
{
	soTiet = 5000;
}

string ISI::xuatdanhmuc()
{
	stringstream s;
	s << TapChi::xuatdanhmuc() << "ISI\n";
	return s.str();
}
