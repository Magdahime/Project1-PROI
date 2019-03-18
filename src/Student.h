#ifndef STUDENT_H
#define STUDENT_H
#include "Main.h"
class Tstudent{
    friend     std::ostream& operator<<(std::ostream& st, Tstudent student);
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
