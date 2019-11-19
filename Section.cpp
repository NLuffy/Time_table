#include <bits/stdc++.h>
#include "Section.h"

using namespace std;

Section::Section(){
    this->numPeriods = 0;
    this->name = "";
}

Section::Section(int nPeriods, vector<string> &subjects, string class_name) {
    this->numPeriods = nPeriods;
    this->subjects = subjects;
    this->name = class_name;
}

Section::~Section() {
    return;
}

int Section::getNumPeriods() {
    return this->numPeriods;
}

string Section::getName() {
    return this->name;
}

vector<string> Section::getSubjects() {
    return this->subjects;
}

