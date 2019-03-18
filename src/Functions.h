#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "Main.h"
#include "Student.h"
#include "Group_of_students.h"
Tgroup_of_students* operator+(const Tgroup_of_students gr_a,const Tgroup_of_students gr_b);
Tgroup_of_students* operator*(const Tgroup_of_students gr_a,const Tgroup_of_students gr_b);
bool compare_index (const Tstudent stud_a,const Tstudent stud_b);
std::ostream& operator<<(std::ostream& st,Tgroup_of_students group);
std::ostream& operator<<(std::ostream& st, Tstudent student);
void interface();
bool get_ans();
bool is_it_int(char* tab, int size);
#endif
