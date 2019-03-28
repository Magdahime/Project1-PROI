#ifndef STUDENT_H
#define STUDENT_H
#include "Main.hpp"
class Tstudent {
    friend     std::ostream& operator<<(std::ostream& st, Tstudent student);
    friend     Tgroup_of_students Tgroup_of_students::operator+(Tgroup_of_students gr_a);
    friend     int compare_index(Tstudent stud1, Tstudent stud2);
    friend     std::vector<std::string> Tgroup_of_students::indexes();
private:
    std::string name;
    std::string surname;
    std::string index;
public:
    Tstudent();
    Tstudent(std::string, std::string, char* index_1);
    ~Tstudent();
    std::string get_name();
    std::string get_surname();
    std::string get_index();
};
#endif
