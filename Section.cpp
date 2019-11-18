#include <bits/stdc++.h>
#include "Section.h"
#include "Global_variables.h"

using namespace std;

Section::Section(){
    this->numPeriods = 0;
    this->name = "";
}

Section::Section(int nPeriods, vector<string> &subjects, string class_name) {
    this->numPeriods = nPeriods;
    this->subjects = subjects;
    this->name = class_name;
    this->timeTable = vector<vector<Period>> (GlobalVariables::WeekDays, vector<Period>(GlobalVariables::periodsPerDay));
}

Section::~Section() {
    return;
}

