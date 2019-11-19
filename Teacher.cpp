#include "Teacher.h"


Teacher::Teacher() {
    this->name = "";
    this->maxPeriodsPerDay = 0;
    // id_num=0;
}

Teacher::Teacher(string name, int maxPeriodsPerDay) {
    this->name=name;
    this->maxPeriodsPerDay= maxPeriodsPerDay;
    // this->id = 0;
    this->id=id_num++;
    // this->teacher_time_table=vector<vector<Period>>(GlobalVariables::WeekDays, vector<Period>(GlobalVariables::periodsPerDay));
}
void Teacher::setQualification(string sub, unordered_set<int>&qual){
    this->qualifications[sub]=qual;
}

Teacher::~Teacher(){
    return;
}

unordered_map<string, unordered_set<int>> Teacher::getQualifications() {
    return this->qualifications;
}

int Teacher::getID() {
    return this->id;
}

string Teacher::getName() {
    return this->name;
}

int Teacher::getMaxPeriods() {
    return this->maxPeriodsPerDay;
}