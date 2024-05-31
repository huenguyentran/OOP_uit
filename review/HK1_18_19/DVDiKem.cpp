#include "DVDiKem.h"
string DVDiKem::tostring()
{
	stringstream s;
	s << "Phi dich vu: ";
	if (phiDV == 0)
		s << "mien phi\t";
	else s << phiDV << "\n";
	return s.str();
}