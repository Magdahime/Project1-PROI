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

std::ostream& Tgroup_of_students::operator<<(std::ostream& st)
{
    st<<"Name:"<<name_group<<std::endl;
    st<<"Number of students:"<<number_of_students<<std::endl;
    st<<"Complete list of students? (Y/N)"<<std::endl;
    if(get_ans()){
        for(int i=0; i<list.size();i++){
            st<<"["<<i<<"]"<<list[i]<<std::endl;
        }
    }
    return st;
}
Tgroup_of_students::~Tgroup_of_students()
{
    std::cout<<"Destroying "<<name_group<<std::endl;
    std::cout<<"Bye, byeeeee..."<<std::endl;
}
