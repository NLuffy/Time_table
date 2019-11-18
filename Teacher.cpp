#include "Teacher.h"
#include "Global_variables.h"

Teacher::Teacher(string name, int maxPeriodsPerDay){
    this->name=name;
    this->maxPeriodsPerDay= maxPeriodsPerDay;
    this->teacher_time_table.resize(7);
}
void Teacher::setQualification(string sub, set<int>&qual){
    this->qualifications[sub]=qual;
}

Teacher::~Teacher(){
    return;
}