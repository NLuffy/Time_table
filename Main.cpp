#include "Input.h"
#include "Output.h"

using namespace std;

School school;

int main() {
    // Teacher a;
    Input input_class;
    // Teacher::id_num;
    input_class.inputSchoolData();
    input_class.inputSectionData();
    input_class.inputTeacherData();
    Output output_class;
    output_class.printSchoolData();
    output_class.printTeachers();
    output_class.printSections();
    return 0;
}