#pragma once
#include "CTimeSpan.h"
#include <iostream>
class CTime
{
private:
	long long h_, m_, s_;
public:
	CTime();
	~CTime();
	CTime(CTimeSpan temp);

	friend std::istream& operator>>(std::istream& in, CTime& a);
	friend std::ostream& operator<<(std::ostream& out, CTime a);

	CTimeSpan convert_to_span();
	CTimeSpan operator-(CTime another);
	
	CTime operator+(long long); // cong them 1 so nguyen giay
	CTime operator-(long long);

	CTime operator--();
	CTime operator++();

	CTime operator=(const CTime);

};

std::istream& operator>>(std::istream& in, CTime& a);
std::ostream& operator<<(std::ostream& out, CTime a);


