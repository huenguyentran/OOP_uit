#include "CTimeSpan.h"

std::ostream& operator<<(std::ostream& out, CTimeSpan a)
{
	out << a.seconds_ << " giay ";
	return out;
}

CTimeSpan::CTimeSpan()
{
	seconds_ = 0;
}
CTimeSpan::CTimeSpan(long long input)
{
	seconds_ = input;
}

CTimeSpan::~CTimeSpan() {};

long long CTimeSpan::operator+(const CTimeSpan another)
{
	return seconds_ + another.seconds_;

}
long long CTimeSpan::operator-(const CTimeSpan another)
{
	return seconds_ - another.seconds_;
}
bool CTimeSpan::operator==(const CTimeSpan another)
{
	return seconds_ == another.seconds_;
}
bool CTimeSpan::operator!=(const CTimeSpan another)
{
	return seconds_ != another.seconds_;
}


long long CTimeSpan::operator>(const CTimeSpan another)
{
	return seconds_ > another.seconds_;
}
long long CTimeSpan::operator>=(const CTimeSpan another)
{
	return seconds_ >= another.seconds_;
}
long long CTimeSpan::operator<=(const CTimeSpan another)
{
	return seconds_ <= another.seconds_;
}
long long CTimeSpan::operator<(const CTimeSpan another)
{
	return seconds_ < another.seconds_;
}
