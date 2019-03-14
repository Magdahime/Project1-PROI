#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "Main.h"
#include "Student.h"
#include "Group_of_students.h"
std::string get_line(int maxline);
void clean();
void operator+(Tgroup_of_students gr_a, Tgroup_of_students gr_b);
void operator*(Tgroup_of_students gr_a, Tgroup_of_students gr_b);
void interface();
#endif
