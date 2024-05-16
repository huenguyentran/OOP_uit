#pragma once
#include <math.h>

class Diem {
public:
	int x, y;
};

class vectorCanh {
protected:
public:
	Diem dau, cuoi;
	bool vuong_goc(vectorCanh* a);
	bool doi_nhau(vectorCanh* a);
	bool do_dai_bang_nhau(vectorCanh* a);
};

