#ifndef STUDENT_H
#define STUDENT_H
#include "Main.h"
#include "Group_of_students.h"
class Tstudent {
    friend     std::ostream& operator<<(std::ostream& st, Tstudent student);
    friend     Tgroup_of_students Tgroup_of_students::operator+(Tgroup_of_students gr_a);
    friend     int compare_index(Tstudent stud1, Tstudent stud2);
    friend     std::vector<char *> Tgroup_of_students::indexes();
private:
    std::string name;
    std::string surname;
    char* index;
public:
    Tstudent();
    Tstudent(std::string, std::string, char* index_1);
    ~Tstudent();
    std::string get_name();
    std::string get_surname();
    char* get_index();
};
#endif
