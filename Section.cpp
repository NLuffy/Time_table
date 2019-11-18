#include <bits/stdc++.h>
#include "Section.h"
#include "Global_variables.h"

using namespace std;

Section::Section(int nPeriods, int nSubjects, string class_name) {
    this->numPeriods = nPeriods;
    this->numSubjects = nSubjects;
    this->name = class_name;
    this->timeTable = vector<vector<Period>> (global.WeekDays, vector<Period>(global.periodsPerDay));
}

Section::~Section() {
    return;
}

