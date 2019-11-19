#ifndef SECTION_H
#define SECTION_H

#include <bits/stdc++.h>

using namespace std;

class Section {
    private:
        int numPeriods;
        vector<string> subjects;
        string name;

    public:
        Section();
        string getName();
        int getNumPeriods();
        vector<string> getSubjects();
        Section(int nPeriods, vector<string> &subjects, string class_name);
        ~Section();
};

#endif