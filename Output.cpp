#include "Output.h"

extern School school;

void Output::printTeachers() {
    cout << "TEACHERS:\n";
    vector<Teacher> teachers = school.getTeachers();
    for (int i = 0; i < teachers.size(); i++) {
        cout << teachers[i].getName() << "\n";
        cout << teachers[i].getMaxPeriods() << "\n";
        cout << teachers[i].getID() << "\n";
        unordered_map<string, unordered_set<int>> qualifications = teachers[i].getQualifications();
        for (auto it = qualifications.begin(); it != qualifications.end(); it++) {
            cout << it->first << ": ";
            for (auto it2 = it->second.begin(); it2 != it->second.end(); it2++) {
                cout << *it2 << " ";
            }
            cout << "\n";
        }
        cout << "\n";
        cout << "\n";
    }
}

void Output::printSections() {
    cout << "SECTIONS:\n";
    vector<Section> sections = school.getSections();
    for (int i = 0; i < sections.size(); i++) {
        cout << sections[i].getName() << "\n";
        cout << sections[i].getNumPeriods() << "\n";
        vector<string> subjects = sections[i].getSubjects();
        for (int j = 0; j < subjects.size(); j++) {
            cout << subjects[i] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

void Output::printSchoolData() {
    cout << school.getSchoolName() << "\n";
    cout << "Start time: " << school.getStartTime().changeToString() << "\n";
    cout << "End Time: " << school.getEndTime().changeToString() << "\n";
    return;
}