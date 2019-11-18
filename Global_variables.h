#include<bits/stdc++.h>
#include "Teacher.h"
#include "Section.h"

using namespace std;

class GlobalVariables {
    public:
        static unordered_map<string, Teacher> nameToTeacher;
        static const int WeekDays = 5;  // number of days in week the school runs
        static int periodsPerDay;
        static Time start_time;
        static Time end_time;
        static unordered_map<Teacher, vector<vector<Period>>> teacher_time_table; // map of each teacher 
                                                                                  // to his/her time table
        static vector<Teacher> teachers;
        static vector<Section> sections;
}; 
