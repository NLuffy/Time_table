#ifndef TEACHER_H
#define TEACHER_H
#include <bits/stdc++.h>
#include "Period.h"

using namespace std;

// #define PRIMARY 0
// #define MIDDLE 1
// #define SECONDARY 2
// #define SENIOR_SECONDARY 3
class Teacher {
    private:
        string name;
        int maxPeriodsPerDay;
        unordered_map< string, unordered_set<int> > qualifications; // subject and qualification(in Primary or Secondary or Senior_Secondary)
        // vector< vector<Period> > teacher_time_table; // period per day (total 5 periods)

    public:
        Teacher();
        Teacher(string name, int maxPeriodsPerDay=GlobalVariables::periodsPerDay);
        void setQualification(string sub, unordered_set<int>&qual);
        unordered_map<string, unordered_set<int>> getQualifications();
        string getName();
        int getMaxPeriods();
        ~Teacher();
};

#endif