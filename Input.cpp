#include <bits/stdc++.h>
#include "Input.h"

using namespace std;

extern School school;

void Input::inputSchoolData(){
    int hr;
    int minute;
    string name;
    cin >> name;
    cin>>hr>>minute;
    Time start(hr, minute);
    cin>>hr>>minute;
    Time end(hr, minute);
    school = School(name, start, end, 5, 7);
    int no_of_teacher;
    cin>>no_of_teacher;
    this->no_of_teachers=no_of_teacher;
    int no_section;
    cin>>no_section;
    this->no_of_sections=no_section;
    return;
}

void Input::inputSectionData(){
        // cout << "No of No of Sections: " << this->no_of_sections << "\n";

    vector<Section> sections;
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
        sections.push_back(section);  
    }
    school.setSections(sections);
}

void Input::inputTeacherData(){
        // cout << "No of Teachers: " << this->no_of_teachers << "\n";

    vector<Teacher> teachers;
    for (int i = 0; i < this->no_of_teachers; i++) {
        string teacher_name;
        int numSubjects;
        
        cin >> teacher_name;
        cin >> numSubjects;
        int noQual;
        string subject;
        Teacher teacher(teacher_name, school.getPeriodsPerDay());
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
        teachers.push_back(teacher);  
    }
    school.setTeachers(teachers);
}
