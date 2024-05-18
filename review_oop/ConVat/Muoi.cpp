#include "Muoi.h"
bool Muoi::dungQL()
{
	if (trungNo < 1 || trungNo > 3)
		return 0;
	if (auTrung < 4 || auTrung > 10)
		return 0;
	if (lotXac < 2 || lotXac > 3)
		return 0;
	if (deTrung < 5 || deTrung > 8)
		return 0;
	return 1;
}