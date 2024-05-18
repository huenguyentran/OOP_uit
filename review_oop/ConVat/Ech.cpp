#include "Ech.h"
bool Ech::dungQL()
{
	if (trungNo < 1 || trungNo > 3)
		return 0;
	if (auTrung < 6 || auTrung > 9)
		return 0;
	if (lotXac < 1 || lotXac > 4)
		return 0;
	if (deTrung < 2 * 12 * 4 && deTrung > 4 * 12 * 4)
		return 0;
	return 1;
}