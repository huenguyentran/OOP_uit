#include "VectorCanh.h"

bool vectorCanh::vuong_goc(vectorCanh* a)
{
	int xx = (this->dau.x - this->cuoi.x) * (a->dau.x - a->cuoi.x);
	int yy = (this->dau.y - this->cuoi.y) * (a->dau.y - a->cuoi.y);
	if (xx + yy == 0) return 1;
	else return 0;
}
bool vectorCanh::doi_nhau(vectorCanh* a)
{
	int dx1 = (this->dau.x - this->cuoi.x);
	int dx2 = (a->dau.x - a->cuoi.x);
	int dy1 = (this->dau.y - this->cuoi.y);
	int dy2 = (a->dau.y - a->cuoi.y);
	if (dx1 == -dx2 && dy1 == -dy2)
	{
		return 1;
	}
	return 0;
}

bool vectorCanh::do_dai_bang_nhau(vectorCanh* a)
{
	int dl1 = pow(this->dau.x - this->cuoi.x, 2) + pow(this->dau.y - this->cuoi.y, 2);
	int dl2 = pow(a->dau.x - a->cuoi.x, 2) + pow(a->dau.y - a->cuoi.y, 2);
	if (dl1 == dl2)
		return 1;
	else return 0;
}