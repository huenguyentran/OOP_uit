#pragma once
#include "header.h"
class Exporter
{
protected:
	string filename;
public:
	virtual void Export(string tenFile, string nd) = 0;
};

