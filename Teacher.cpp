#include "Teacher.h"
#include "Global_variables.h"

Teacher::Teacher(string name, int maxPeriodsPerDay){
    this->name=name;
    this->maxPeriodsPerDay= maxPeriodsPerDay;

    this->teacher_time_table=vector<vector<Period>> (global.WeekDays, vector<Period>(global.periodsPerDay));
}
Teacher::void setQualification(string sub, set<int>&qual){
    this->qualifications[sub]=qual;
}

Teacher::~Teacher(){
    return;
}