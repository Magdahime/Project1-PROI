#ifndef GROUP_OF_S_H
#define GROUP_OF_S_H
#include "Main.h"
class Tstudent;
class Tgroup_of_students{
    friend std::ostream& operator<<(std::ostream& st,Tgroup_of_students group);
    friend void show_me_groups(std::vector<Tgroup_of_students> list, int number_of_groups);
private:
 std::string name_group;
 int number_of_students=0;
 std::vector<Tstudent> list;
public:
    std::string set_name_group();
    Tgroup_of_students();
    Tgroup_of_students(std::string name, int number, std::vector<Tstudent> new_list);
    ~Tgroup_of_students();
    std::vector<std::string> indexes();
    void add_new_student(Tstudent student_a);
    Tgroup_of_students operator+(Tgroup_of_students gr_a);
    Tgroup_of_students operator*(Tgroup_of_students gr_a);
    Tgroup_of_students operator+=(Tgroup_of_students gr_a);
    Tgroup_of_students operator*=(Tgroup_of_students gr_a);
    bool check_f_double(Tstudent student_a);
};
#endif
