#include <bits/stdc++.h>
#include "Section.h"

using namespace std;

Section::Section(int nPeriods, int nSubjects, string class_name) {
    this->numPeriods = nPeriods;
    this->numSubjects = nSubjects;
    this->name = class_name;
    this->timeTable = vector<Period>(nPeriods);
}

Section::~Section() {
    return;
}

