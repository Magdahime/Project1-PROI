#include "Main.h"
#include "Functions.h"
#include "Group_of_students.h"
#include "Student.h"
bool is_it_int(char* tab,int size){
    for(int i=0; i<size; i++){
        if(!isdigit(tab[i]))
            return false;
    }
    return true;
}
bool get_ans()
{
char c;
(std::cin>>c).get();
if(c=='Y'|| c=='y'){
    return true;
}else if(c=='N' || c=='n')
    return false;
else 
    std::cout<<"Error, please try once again."<<std::endl;
return get_ans();
}

std::ostream& operator<<(std::ostream& st,Tgroup_of_students group)
{
    st<<"Name:"<<group.name_group<<std::endl;
    st<<"Number of students:"<<group.number_of_students<<std::endl;
    st<<"Complete list of students? (Y/N)"<<std::endl;
    if(get_ans()){
        for(int i=0; i<group.number_of_students;i++){
            st<<"["<<i<<"]"<<group.list[i]<<std::endl;
        }
    }
    return st;
}
std::ostream& operator<<(std::ostream& st, Tstudent student){
    st<<student.surname<<" "<<student.name<<" "<<student.index<<std::endl;
    return st;
}
