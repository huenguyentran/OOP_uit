#include "CCVinHome.h"
#include <time.h>

int CCVinHome::tienphong()
{
	if (dienTich > 600)
		return soTang * 6 * (rand() % 4 + 8); // moi tang co 6 phong
	else
		return soTang * 6 * (rand() % 3 + 5);
}