#include "Main.h"
#include "Group_of_students.h"
#include "Functions.h"
Tgroup_of_students::Tgroup_of_students()
{
    std::cout<<"You are creating a new group."<<std::endl;
    name_group=set_name_group();
}

std::string Tgroup_of_students::set_name_group(void)
{
     std::cout<<"How would you like to name it?"<<std::endl;
     std::string name=get_line(MAX_LINE);
     return(name);
}

void Tgroup_of_students::operator>>(Tgroup_of_students gr_a)
{
    std::cout<<"Name:"<<gr_a.name_group<<std::endl;
    std::cout<<"Number of students:"<<gr_a.name_group<<std::endl;
    std::cout<<"Show the complete list of the students?"<<std::endl;
}
