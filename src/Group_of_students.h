#ifndef GROUP_OF_S_H
#define GROUP_OF_S_H
#include "Main.h"
#include "Student.h"
class Tstudent;
class Tgroup_of_students{
    friend std::ostream& operator<<(std::ostream& st,Tgroup_of_students group);
    friend Tgroup_of_students* operator+(const Tgroup_of_students gr_a, const Tgroup_of_students gr_b);
    friend Tgroup_of_students* operator*(const Tgroup_of_students gr_a, const Tgroup_of_students gr_b);
private:
 std::string name_group;
 int number_of_students=0;
 std::vector<Tstudent> list;
public:
    std::string set_name_group();
    Tgroup_of_students();
    ~Tgroup_of_students();
    void add_new_student();
};
#endif
