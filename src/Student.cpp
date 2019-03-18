#include "Main.h"
#include "Student.h"
#include "Functions.h"
Tstudent::Tstudent()
{
    std::cout<<"You are adding a new student"<<std::endl;
    surname = get_surname();
    name = get_name();
    index = get_index();
}
Tstudent::~Tstudent()
{
    std::cout<<"You successfully removed student "<<name<<" "<<surname<<" from data base"<<std::endl;
}

std::string Tstudent::get_name()
{
    std::cout<<"Enter name of the new student:"<<std::endl;
    char name[MAX_LINE];
    std::cin.getline(name,MAX_LINE);
    return name;
}
std::string Tstudent::get_surname()
{
    std::cout<<"Enter surname of the new student:"<<std::endl;
    char surname[MAX_LINE];
    std::cin.getline(surname,MAX_LINE);
    return surname;
}
char* Tstudent::get_index()
{
    std::cout<<"Enter index of the new student:"<<std::endl;
static char index_buf[INDEX_MAX];
    do{
        std::cout<<"Please, enter "<<INDEX_MAX<<" digits."<<std::endl;
        std::cin.getline(index_buf,INDEX_MAX+1);
    }while(0);
    return(index_buf);
}
