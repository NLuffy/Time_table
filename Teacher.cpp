#include "Teacher.h"

Teacher::Teacher() {
    this->name = "";
    this->maxPeriodsPerDay = 0;
}

Teacher::Teacher(string name, int maxPeriodsPerDay=GlobalVariables::periodsPerDay) {
    this->name=name;
    this->maxPeriodsPerDay= maxPeriodsPerDay;

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