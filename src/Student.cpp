#include "Main.h"
#include "Student.h"
#include "Functions.h"
Tstudent::Tstudent()
{
    std::cout<<"This is creator of the student "<<std::endl;
    std::cout<<"You are adding a new student"<<std::endl;
    surname = get_surname();
    name = get_name();
    index = get_index();
}
Tstudent::Tstudent(std::string name_1 , std::string surname_1, char * index_1)
{
    std::cout<<"This is creator of "<<name_1<<" "<<surname_1<<" "<<" student"<<std::endl;
    name =name_1;
    surname=surname_1;
    index=index_1;
}

Tstudent::~Tstudent()
{
    std::cout<<"This is destructor of student "<<name<<" "<<surname<<std::endl;
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
std::string Tstudent::get_index()
{
    std::cout<<"Enter index of the new student:"<<std::endl;
    char index_buf[INDEX_MAX];
    do{
        std::cout<<"Please, enter "<<INDEX_MAX-1<<" digits."<<std::endl;
        std::cin.get(index_buf,INDEX_MAX);
        std::cin.clear();
        std::cin.ignore(TRASH_MAX, '\n' );
    }while(!is_it_int(index_buf,INDEX_MAX));
    return(index_buf);
}
