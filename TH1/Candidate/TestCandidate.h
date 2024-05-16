#pragma once
#include "candidate.h"


class candidate;

class TestCandidate {
private:
    int n;
    candidate *TS;
public:
    TestCandidate();
    ~TestCandidate();
    void nhap_tt();
    void in_tt();
};

