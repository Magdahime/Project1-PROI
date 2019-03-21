#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "Main.h"
int compare_index(char* index1, char* index2);
int compare_index(Tstudent stud1, Tstudent stud2);
std::ostream& operator<<(std::ostream& st,Tgroup_of_students group);
std::ostream& operator<<(std::ostream& st, Tstudent student);
void show_me_groups(std::vector <Tgroup_of_students> list, int number_of_groups);
int group_choosing(std::vector< Tgroup_of_students > groups, int number_of_groups);
void interface();
void clrscrs(void);
bool get_ans();
bool is_it_int(char* tab, int size);
#endif
