#include "TestCandidate.h"
TestCandidate::TestCandidate() {
    TS = NULL;
    n = 0;
}

TestCandidate::~TestCandidate(){
    delete[] TS;
}

void TestCandidate::nhap_tt() {
    cout << "nhap so thi sinh: ";
    cin >> n;
    TS = new candidate[n];
    for (int i = 0; i < n; i++)
        TS[i].input();
}

void TestCandidate::in_tt() {
    cout << "TS co tong diem lon hon 15: \n";
    for (int i = 0; i < n; i++) {
        if (TS[i].lay_tong() > 15) TS[i].output();
    }
}