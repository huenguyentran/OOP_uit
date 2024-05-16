#pragma once
#include <iostream>
#include <string>
#include <random>
#include <time.h>
class GiaSuc
{
private:
	int so_con;
protected:
	int sua;
	std::string tieng_keu_;
public:
	GiaSuc();
	~GiaSuc();

	int sinh_con();
	void keu();
	virtual int tao_sua() = 0;
};

