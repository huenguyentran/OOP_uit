#pragma once
#include <iostream>
class CTimeSpan
{
public:
	CTimeSpan();
	CTimeSpan(long long);
	~CTimeSpan();
	long long operator+(const CTimeSpan another);
	long long operator-(const CTimeSpan another);
	bool operator==(const CTimeSpan another);
	bool operator!=(const CTimeSpan another);

	long long operator>(const CTimeSpan another);
	long long operator>=(const CTimeSpan another);
	long long operator<=(const CTimeSpan another);
	long long operator<(const CTimeSpan another);


	long long get_seconds() const { return seconds_; }
	void set_seconds(long long a) { seconds_ = a;}

	friend std::ostream& operator<<(std::ostream& out, CTimeSpan a);

private:
	long long seconds_;
};

