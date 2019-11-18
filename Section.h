#ifndef SECTION_H
#define SECTION_H

#include <bits/stdc++.h>
#include "Period.h"

using namespace std;

class Section {
    private:
        int numPeriods;
        vector<string> subjects;
        string name;

    public:
        Section();
        vector<vector<Period>> timeTable;
        Section(int nPeriods, vector<string> &subjects, string class_name);
        ~Section();
};

#endif