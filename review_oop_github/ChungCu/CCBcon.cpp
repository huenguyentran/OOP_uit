#include "CCBcon.h"
#include <time.h>


int CCBcon::tienphong()
{
	if (dienTich > 600)
		return soTang * 6 * (rand() % 5 + 10); // moi tang co 6 phong
	else
		return soTang * 6 * (rand() % 5 + 6);
}