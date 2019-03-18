#include "Main.h"
#include "Group_of_students.h"
#include "Functions.h"
Tgroup_of_students::Tgroup_of_students()
{
    std::cout<<"You are adding a new group."<<std::endl;
    name_group=set_name_group();
}

std::string Tgroup_of_students::set_name_group(void)
{
     std::cout<<"How would you like to name it?"<<std::endl;
     char name[MAX_LINE];
     std::cin.getline(name, MAX_LINE);
     std::cout<<name<<std::endl;
     return(name);
}
Tgroup_of_students::~Tgroup_of_students()
{
    std::cout<<"You successfully removed "<<name_group<<std::endl;
    }
