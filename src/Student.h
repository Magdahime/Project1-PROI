#ifndef STUDENT_H
#define STUDENT_H
#include "Main.h"
#include "Group_of_students.h"
class Tstudent {
    friend     std::ostream& operator<<(std::ostream& st, Tstudent student);
    friend bool compare_index (const Tstudent stud_a,const Tstudent stud_b);
private:
    std::string name;
    std::string surname;
    char* index;
public:
    Tstudent();
    ~Tstudent();
    std::string get_name();
    std::string get_surname();
    char* get_index();
};
#endif
