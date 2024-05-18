#include "Buom.h"


bool Buom::dungQL()
{
	if (trungNo < 3 || trungNo > 8)
		return 0;
	if (auTrung != 15 && auTrung != 16)
		return 0;
	if (lotXac != 10)
		return 0;
	if (deTrung != 2 && deTrung != 3)
		return 0;
	return 1;
}