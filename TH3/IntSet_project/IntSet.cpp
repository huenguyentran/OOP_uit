#include "IntSet.h"

std::istream& operator >> (std::istream& in, IntSet& a)
{
	int* list;
	int n;
	std::cout << "nhap so luong phan tu cua set: ";
	std::cin >> n;
	list = new int[n];
	std::cout << "nhap tung phan tu cua set: \n";
	int i = 0;
	while (i < n)
	{
		std::cin >> list[i];
		i++;
	}
	a.chuanhoa(list, n);
	IntSet res(list, n);
	a = res;//cpy constructor is called
	if (list != NULL)
	{
		delete[] list;
		list = NULL;
	}
	return in;
}

std::ostream& operator << (std::ostream& out,IntSet a)
{
	if (a.count_ == 0 || a.values_ == NULL)
	{
		out << "set rong";
	}
	else
	{
	for (int i = 0; i < a.count_; i++)
		out << a.values_[i] << "\t";
	}
	return out;
}

IntSet::IntSet(const IntSet& set2)
{
	if (values_ == NULL)
	{
		count_ = set2.count_;
		values_ = new int[count_];
		for (int i = 0; i < count_; i++)
			values_[i] = set2.values_[i];
	}
	return;
}


IntSet::IntSet()
{
	count_ = 0;
}

IntSet::IntSet(int* list, int n)
{
	chuanhoa(list, n);
	count_ = n;
	values_ = new int[count_];
	int i = 0;
	for (int i = 0; i < count_; i++)
		values_[i] = list[i];
}


IntSet::~IntSet()
{
	if (values_ != NULL)
	{
		delete[] values_;
		values_ = NULL;
	}
}


IntSet IntSet::operator=(const IntSet& another)
{
	if (another.count_ == 0 || another.values_ == nullptr) {
		count_ = 0;
		values_ = nullptr;
		return *this;
	}
	if (values_ != NULL)
	{
		delete[] values_; 
		values_ = NULL;
	}

	count_ = another.count_;
	values_ = new int[count_];

	for (int i = 0; i < count_; i++)
		values_[i] = another.values_[i];

	return *this;
}

IntSet IntSet::operator+(IntSet another)
{
	int* list, n = 0;
	list = new int[count_  + another.count_];
	int i = 0, j = 0;

	while (i < count_ && j < another.count_)
	{
		if (values_[i] < another.values_[j])
		{
			list[n] = values_[i];
			n++; i++;
		} else if(values_[i] == another.values_[j])
		{
			list[n] = values_[i];
			i++; j++; n++;
		}
		else
		{
			list[n] = values_[j];
			n++; j++;
		}
	}
	while(i < count_)
	{
		list[n] = values_[i];
		n++; i++;
	}
	while (j < another.count_)
	{
		list[n] = values_[j];
		n++; j++;
	}
	IntSet result(list, n);
	for (int i = 0; i < count_; i++)
		result.values_[i] = list[i];
	delete[] list;
	return result;
}

IntSet IntSet::operator-(const IntSet another)
{
	int* list, n = 0;
	list = new int[count_];
	int j = 0;
	for (int i = 0; i < count_; i++)
	{
		if (values_[i] == another.values_[j])
		{
			j++;
		}
		else
		{
			list[n] = values_[i];
			n++;
		}
	}
	IntSet res(list, n);
	delete[] list;
	return res;
}


int& IntSet::operator[](int index)//da nhap set 
{
	while (index < 0) std::cin >> index;
	return values_[index];
}

int IntSet::operator==(const IntSet& another) const
{
	if (another.count_ != another.count_) return 0;
	for (int i = 0; i < count_; i++)
		if (values_[i] != another.values_[i]) return 0;
	return 1;
}


void IntSet::chuanhoa(int* list, int& n)
{
	if (n == 0) return;
	std::sort(list, list + n);
	int j = 0;
	for (int i = 1; i < n; i++)
	{
		if (list[j] < list[i]) {
			j++;
			list[j] = list[i];
		}
	}
	n = j + 1;
}