#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "Main.h"
#include "Student.h"
#include "Group_of_students.h"
void operator+(Tgroup_of_students gr_a, Tgroup_of_students gr_b);
void operator*(Tgroup_of_students gr_a, Tgroup_of_students gr_b);
std::ostream& operator<<(std::ostream& st,Tgroup_of_students group);
std::ostream& operator<<(std::ostream& st, Tstudent student);
void interface();
bool get_ans();
bool is_it_int(char* tab, int size);
#endif
