#ifndef Period_h
#include <bits/stdc++.h>
#include "Teacher.h"

using namespace std;

class Period{
    
    private:
    string subject;
    string Class;
    Teacher teacher;

    public:
    Period(string sub, string sec_name, string teacher_name);
    ~Period();
};



#endif
