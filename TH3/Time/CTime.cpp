#include "CTime.h"


CTime::CTime()
{

}
CTime::CTime(CTimeSpan temp)
{
	long long sec = temp.get_seconds();
	if (sec / 3600 != 0)
	{
		this->h_ = sec / 3600;
		sec = sec % 3600;
	}
	if (sec / 60 != 0)
	{
		this->m_ = sec / 60;
		sec = sec % 60;
	}
	this->s_ = sec;
}
CTime::~CTime()
{

}

std::istream& operator>>(std::istream& in, CTime& a)
{
	std::cout << "gio: "; in >> a.h_;
	std::cout << "phut: "; in >> a.m_;
	std::cout << "giay: "; in >> a.s_;
	return in;
}
std::ostream& operator<<(std::ostream& out, CTime a)
{
	out << a.h_ << " gio " << a.m_ << " phut " << a.s_ << " giay ";
	return out;
}


CTimeSpan CTime::convert_to_span()
{
	CTimeSpan temp;
	temp.set_seconds(h_ * 3600 + m_ * 60 + s_);
	return temp;

}

CTimeSpan CTime::operator-(CTime another)
{
	CTimeSpan temp;
	long long res = this->convert_to_span() - another.convert_to_span();
	temp.set_seconds(res);
	return temp;
}

CTime CTime::operator+(long long sec)
{
	long long res = this->convert_to_span() + sec;
	CTime a(res);
	return a;
}
CTime CTime::operator-(long long sec)
{
	long long res = convert_to_span() - sec;
	CTime a(res);
	return a;

}

CTime CTime::operator--()
{
	*this = *this - 1;
	return *this - 1;
}
CTime CTime::operator++()
{
	*this = *this + 1;
	return *this;
}

CTime CTime::operator=(const CTime temp)
{
	h_ = temp.h_;
	m_ = temp.m_;
	s_ = temp.s_;
	return *this;
}

