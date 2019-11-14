#include "Period.h"
#include "Global_variables.h"


Period::Period(string sub, string sec_name, string teacher_name){
    subject = sub;
    Class = sec_name;
    teacher= nameToTeacher[teacher_name];
}


Period::~Period(){
    return;
}