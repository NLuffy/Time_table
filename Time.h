#ifndef TIME_H
#define TIME_H

#include <bits/stdc++.h>
using namespace std;

class Time {
    private:
    int hr;
    int min;

    public:
    Time();
    Time(int hr, int min);
    ~Time();
    int subtract(Time t2);
    string changeToString();
};

#endif