#include<bits/stdc++.h>
#include "Teacher.h"

class GlobalVariables {
    public:
        static unordered_map<string, Teacher> nameToTeacher;
        static const int WeekDays = 5;  // number of days in week the school runs
        static const int periodsPerDay = 7;
        static unordered_map<Teacher, vector<vector<Period>>> teacher_time_table; // map of each teacher 
                                                                                  // to his/her time table
}; 
