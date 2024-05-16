#include "IntSet.h"
using namespace std;

int main() {
    int* list = new int[3];
    list[0] = 2;
    list[1] = 2;
    list[2] = 1;
    IntSet s1, s2(list, 3), s3;
    cin >> s1;
    s3 = s1 - s2;//Unions
    cout << s3 << "\n";
    s3 = s1 + s2;
    s3 = s1 - s2; //S1\S2 diff
    cout << s3 << "\n";
    cout << s3[0];
   
    return 0;
}