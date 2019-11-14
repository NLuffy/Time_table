#include<bits/stdc++.h>
#include "Teacher.h"

struct GlobalVariables {
    unordered_map<string, Teacher> nameToTeacher;
    int WeekDays = 5;  // number of days in week the school runs
    int periodsPerDay = 7;
} global; 
