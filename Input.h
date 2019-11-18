#ifndef INPUT_H
#define INPUT_H
#include "Teacher.h"
#include "Section.h"
#include "Global_variables.h"
#include "Time.h"

class Input {
    private:
        
        int no_of_teachers;
        int no_of_sections;

    public:
        

        void inputSchoolData();
        void inputTeacherData();
        void inputSectionData();
};

#endif