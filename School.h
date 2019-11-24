#ifndef SCHOOL_H
#define SCHOOL_H

#include "Time.h"
#include "Period.h"
#include "Teacher.h"
#include "Section.h"
#include <bits/stdc++.h>

using namespace std;

class School {
    private:
        string schoolName;
        int periodsPerDay;
        int weekDays;
        Time startTime;
        Time endTime;
        vector<Section> sections;
        vector<Teacher> teachers;
        int getNumberOfTotalPeriods();

    public:
        unordered_map<string, vector<vector<Period>>> schoolTimeTable;
        unordered_map<int, vector<vector<Period>>> teacherTimeTable;
        School();
        School(string name, Time startTime, Time endTime, int periods, int weekDays);
        string getSchoolName();
        int getPeriodsPerDay();
        int getWeekDays();
        Time getStartTime();
        Time getEndTime();
        void setSections(vector<Section>& sections);
        void setTeachers(vector<Teacher>& teachers);
        vector<Section> getSections();
        vector<Teacher> getTeachers();
};

#endif