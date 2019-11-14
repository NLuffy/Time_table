#ifndef TEACHER_H
#define TEACHER_H
#include <bits/stdc++.h>
#include "Period.h"

using namespace std;

#define PRIMARY 0
#define MIDDLE 1
#define SECONDARY 2
#define SENIOR_SECONDARY 3
#define Mr 0
#define Ms 1
#define Mrs 2
#define Dr 3

class Teacher {
    private:
    struct name {
        int salutation;
        string firstName;
        string middleName;
        string lastName;
    } name;
    
    int maxPeriodsPerDay;
    
    public:
    unordered_map<string, vector<int>> qualifications;
    vector<vector<Period>> teacher_time_table;
    void setName(string salut, string firstName = "", string lastName = "", string middleName = "");
    void setMaxPeriods(int periods);
    string getName();
    int getMaxPeriods();
};

#endif