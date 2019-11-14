#include<Period.h>


Period::Period(string sub, string sec_name, string teacher_name){
    subject = sub;
    Class = sec_name;
    teacher = teacher_name;
}


Period::~Period(){
    return;
}