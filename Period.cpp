#include "Period.h"

Period::Period() {
    this->subject = "";
    this->Class = "";
}

Period::Period(string sub, string sec_name, Teacher teacher, Time startTime, Time endTime) {
    this->subject = sub;
    this->Class = sec_name;
    this->teacher = teacher;
    this->startTime = startTime;
    this->endTime = endTime;
    return;
}


Period::~Period(){
    return;
}