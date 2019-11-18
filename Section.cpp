#include <bits/stdc++.h>
#include "Section.h"
#include "Global_variables.h"

using namespace std;
Section::Section(){
    this->numPeriods = 0;
    this->numSubjects = 0;
    this->name = "";
    this->timeTable;
}
Section::Section(int nPeriods, int nSubjects, string class_name) {
    this->numPeriods = nPeriods;
    this->numSubjects = nSubjects;
    this->name = class_name;
    this->timeTable = vector<vector<Period>> (GlobalVariables::WeekDays, vector<Period>(GlobalVariables::periodsPerDay));
}

Section::~Section() {
    return;
}

