#include <iostream>
using namespace std;

class IntArr {
private:
int count; //tổng số lượng phần tử có trong values
int * values; //mảng các số nguyên đang có trong đối tượng hiện tại
public:
IntArr()
{
    count = 0;
    values = NULL;
}
IntArr(int A_count, int A_value)
{
    count = A_count;
    values = new int[A_count];
    for(int i = 0; i < count; i++)
        values[i] = A_value;
}
IntArr(int A_count)
{
    count = A_count;
    values = new int[count];
    for(int i = 0; i < count; i++)
        values[i] = 0;
}

IntArr(const IntArr& p)
{
    this->count = p.count;
    this->values = new int[count];
    for(int i = 0; i < count; i++)
        values[i] = p.values[i];
}

~IntArr()
{
    if(count != 0 && values != NULL)
    {
        delete[] values;
        values = NULL;
    }
}

IntArr concat(IntArr another)
{
    IntArr res(another.count + count);
    for(int i = 0; i < count; i++) 
        res.values[i] = values[i];
    for(int i = 0; i < another.count; i++ )
        res.values[count + i] = another.values[i];
    return res;
}

IntArr operator=(const IntArr& another)
{
    if(this->count != 0)
    {
        count = 0;
        delete[] this->values;
        values = NULL;
    }
    
    this->count = another.count;
    this->values = new int[count];
    for(int i = 0; i < count; i++)
        values[i] = another.values[i];
    return *this;
}

IntArr push(int x)
{
    IntArr temp(1, x);
    *this = this->concat(temp);
    return *this;
}

friend istream& operator>>(istream& is, IntArr& a)
{
    if(a.count != 0)
    {
        a.count = 0;
        delete[] a.values;
        a.values = NULL;
    }

    cout << "Nhap so phan tu cua mang: ";
    is >> a.count;
    a.values = new int[a.count];
    for(int i = 0; i < a.count; i++)
        is >> a.values[i];
    return is;
}

friend ostream& operator<<(ostream& os,const IntArr& a)
{
    for(int i = 0; i < a.count; i++)
        os << a.values[i] << " ";
    return os;
}


};


int main() {
    IntArr l1;//tạo mảng không chứa bất kì phần tử nào
    IntArr l2(3,2);// tạo một mảng với 3 phần tử, tất cả phần tử đều có giá trị là 2
    IntArr l3(2);//tạo một mảng với 2 phần tử, tất cả phần tử đều có giá trị là 0
    IntArr l4 = l2.concat(l3);
    //tạo ra một IntArr mới = nối các phần tử l3 vào cuối các phần tử của l2 theo thứ tự
    l2.push(3);//thêm số 3 vào cuối danh sách trong đối tượng l2
    cin >> l2;//Xoá các giá trị hiện có trong l2 và cho phép người dùng nhập số lượng phần tử mới và giá trị các phần tử mới vào l2 (cần xoá các vùng nhớ không sử dụng nếu có)
    cout << l2;//in ra các số nguyên có trong danh sách
    //Khi vượt quá phạm vi sử dụng cần huỷ tất cả các vùng nhớ được cấp phát cho các values của IntArr
    return 0;
}