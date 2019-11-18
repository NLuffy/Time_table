#include "Period.h"
#include "Global_variables.h"

Period::Period() {
    this->subject = "";
    this->Class = "";
    this->teacher;//= GlobalVariables::nameToTeacher[teacher_name];
    this->startTime;
    this->endTime;
}

Period::Period(string sub, string sec_name, string teacher_name, Time startTime, Time endTime) {
    this->subject = sub;
    this->Class = sec_name;
    this->teacher= GlobalVariables::nameToTeacher[teacher_name];
    this->startTime = startTime;
    this->endTime = endTime;
    return;
}


Period::~Period(){
    return;
}