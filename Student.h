#ifndef STUDENT_H
#define STUDENT_H
#include "Main.h"
class Tstudent{
private:
    std::string name;
    std::string surname;
    int index;
public:
    Tstudent();
    ~Tstudent();
    std::string get_name();
    std::string get_surname();
    int get_index;
};
#endif
