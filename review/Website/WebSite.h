#pragma once
#include "ThanhPhan.h"
#include "ButtonImage.h"
#include "ButtonText.h"
#include "Label.h"
#include <vector>
class WebSite
{
	vector <ThanhPhan*> vthanhphan;
	int soLuong;
public:
	~WebSite();
	void NhapWeb();
	void ktraTPdau();
	void Ktraquitacphoimau();

};

