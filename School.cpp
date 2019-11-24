#include "School.h"

School::School() {
    this->schoolName = "";
    this->periodsPerDay = 7;
    this->weekDays = 5;
}

School::School(string name, Time startTime, Time endTime, int periods=7, int weekDays=5) {
    this->schoolName = name;
    this->startTime = startTime;
    this->endTime = endTime;
    this->periodsPerDay = periods;
    this->weekDays = weekDays;
}

string School::getSchoolName() {
    return this->schoolName;
}

int School::getPeriodsPerDay() {
    return this->periodsPerDay;
}

int School::getWeekDays() {
    return this->weekDays;
}

Time School::getStartTime() {
    return this->startTime;
}

Time School::getEndTime() {
    return this->endTime;
}

void School::setSections(vector<Section>& sections) {
    this->sections = sections;
}

void School::setTeachers(vector<Teacher>& teachers) {
    this->teachers = teachers;
}

vector<Section> School::getSections() {
    return this->sections;
}

vector<Teacher> School::getTeachers() {
    return this->teachers;
}

int School::getNumberOfTotalPeriods() {
    int total = 0;
    for (int i = 0; i < this->sections.size(); i++) {
        total += this->sections[i].getSubjects().size();
    }
    return total;
}