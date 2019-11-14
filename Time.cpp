#include <bits/stdc++.h>
#include "Time.h"

using namespace std;

Time::Time(int hr, int min) {
    this->hr = hr;
    this->min = min;
}

Time::~Time() {
    return;
}

int Time::subtract(Time t2) {
    return (this->hr - t2.hr)*60 + (this->min - t2.min);
}

string Time::changeToString() {
    string ans = "";
    if (this->hr > 12) ans += to_string(this->hr - 12);
    else ans += to_string(this->hr);
    ans += " ";
    ans += to_string(this->min);
    ans += " ";
    if (this->hr >= 12) ans += "PM";
    else ans += "AM";
    return ans; 
}