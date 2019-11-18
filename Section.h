#ifndef SECTION_H
#define SECTION_H

#include <bits/stdc++.h>
#include "Period.h"

using namespace std;

class Section {
    private:
        int numPeriods;
        int numSubjects;
        string name;

    public:
        Section();
        vector<vector<Period>> timeTable;
        Section(int nPeriods, int nSubjects, string class_name);
        ~Section();
};

#endif