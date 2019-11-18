#include <bits/stdc++.h>
#include "Input.h"

void Input::inputSchoolData(){
    int hr;
    int minute;
    cin>>hr>>minute;
    Time start(hr, minute);
    cin>>hr>>minute;
    Time end(hr, minute);
    GlobalVariables::start_time= start;
    GlobalVariables::end_time= start;
    int no_of_teacher;
    cin>>no_of_teacher;
    this->no_of_teachers=no_of_teacher;
    int no_section;
    cin>>no_section;
    this->no_of_sections=no_section;
    return;
}

void Input::inputSectionData(){
    for (int i = 0; i < this->no_of_sections; i++) {
        int numPeriods;
        string section_name;
        int numSubjects;
        cin >> numPeriods;
        cin >> section_name;
        cin >> numSubjects;
        vector<string> subjects(numSubjects);
        for (int j = 0; j < numSubjects; j++) cin >> subjects[j];
        Section section(numPeriods, subjects, section_name);
        GlobalVariables::sections.push_back(section);  
    }
}

void Input::inputTeacherData(){
    for (int i = 0; i < this->no_of_teachers; i++) {
        string teacher_name;
        int numSubjects;
        
        cin >> teacher_name;
        cin >> numSubjects;
        
        int noQual;
        string subject;
        Teacher teacher(teacher_name);
        for (int j = 0; j < numSubjects; j++){
             cin >> subject;
             cin >> noQual;

             int level;
             unordered_set<int> qualifications;
             for(int k=0;k<noQual; k++){
                 cin >> level;
                 qualifications.insert(level);
             }
             teacher.setQualification(subject, qualifications);    
        }
        GlobalVariables::teachers.push_back(teacher);  
    }
}
