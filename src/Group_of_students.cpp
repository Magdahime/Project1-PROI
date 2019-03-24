#include "Main.h"
Tgroup_of_students::Tgroup_of_students()
{
    std::cout<<"This is creator of the group "<<std::endl;
    std::cout<<"You are adding a new group."<<std::endl;
    name_group=set_name_group();
}
Tgroup_of_students::Tgroup_of_students(std::string name, int number, std::vector<Tstudent> new_list)
{
    std::cout<<"This is creator of "<<name<<" group"<<std::endl;
    name_group=name;
    number_of_students=number;
    list=new_list;
}

std::string Tgroup_of_students::set_name_group(void)
{
     std::cout<<"How would you like to name it?"<<std::endl;
     char name[MAX_LINE];
     std::cin.getline(name, MAX_LINE);
     return(name);
}
Tgroup_of_students::~Tgroup_of_students()
{
    std::cout<<"This is destructor of "<<name_group<<std::endl;
    }
    
void Tgroup_of_students::add_new_student(Tstudent student_a)
{
    if(check_f_double(student_a)){
        std::cout<<"Error, you cannot add the same student twice."<<std::endl;
    }else {    
    list.push_back(student_a);
    number_of_students++;
    }
}
bool Tgroup_of_students::check_f_double(Tstudent student_a)
{
    for(int i=0;i <number_of_students;i++){
        if(!compare_index(student_a,list[i])){
            return true;
        }
    }
    return false;
}

Tgroup_of_students Tgroup_of_students::operator*(Tgroup_of_students gr_a)
{
    std::string name=set_name_group();
    std::vector <Tstudent> new_list;
    int new_number=0;
for(int i=0;i<number_of_students;i++){
    for(int j=0;j<gr_a.number_of_students;j++){
        if(compare_index(list[i],gr_a.list[j])==0){
            new_list.push_back(list[i]);
            new_number++;
        }
    }
}
return Tgroup_of_students(name,new_number,new_list);
}
Tgroup_of_students Tgroup_of_students::operator+(Tgroup_of_students gr_a)
{
    std::string name=set_name_group();
        int new_number=0;
        std::vector <Tstudent> new_list;
    for(int i=0;i<gr_a.number_of_students;i++){
        new_list.push_back(gr_a.list[i]);
        new_number++;
    }
        for(int i=0;i<number_of_students;i++){
        new_list.push_back(list[i]);
        new_number++;
    }
    if(new_number>=2)
    {
        Tstudent* first=&new_list[0];
        Tstudent* last;
        Tstudent* iterator;
        last = &new_list[new_number];
for(int i=0; first!=last; i++){
    first=&new_list[i];
    for(int j=i+1;j<new_number;j++){
        iterator= &new_list[j];
        if(!compare_index(*first,*iterator)){
            new_list.erase(new_list.begin()+j);
            new_number--;
        }
    }
}
    }
    
    return Tgroup_of_students(name,new_number,new_list);
}
Tgroup_of_students Tgroup_of_students::operator+=(Tgroup_of_students gr_a)
{
    Tgroup_of_students group_h=operator+(gr_a);
    for(int i=0; i<number_of_students;i++){
        list.erase(list.begin()+i);
    }
    number_of_students= group_h.number_of_students;
    name_group = group_h.name_group;
    for(int i=0;i<group_h.number_of_students;i++){
             list.push_back(group_h.list[i]);
    }
    return *this;
}
Tgroup_of_students Tgroup_of_students::operator*=(Tgroup_of_students gr_a)
{
        for(int i=0; i<number_of_students;i++){
        list.erase(list.begin()+i);
    }
    Tgroup_of_students group_h=operator*(gr_a);
    number_of_students= group_h.number_of_students;
    name_group = group_h.name_group;
    for(int i=0;i<group_h.number_of_students;i++)
        list[i]=group_h.list[i];
    return *this;
}


std::vector<std::string> Tgroup_of_students::indexes()
{ 
    std::vector <std::string> index;
    if(number_of_students==0){
        std::cout<<"There is no student in this group!"<<std::endl;
        std::cout<<"Hint: Add a new student before this operation."<<std::endl;
        std::string biggest =(char*)"Error";
        std::string smallest=(char*)"Error";
        index.push_back(biggest);
        index.push_back(smallest); 
        return(index);
    }else{
    std::string biggest=list[0].index;
    std::string smallest=list[0].index;
    for(int  i=0; i<number_of_students;i++)
    {
        if(compare_index(smallest,list[i].index)>1){
            smallest = list[i].index;
        }
        if(compare_index(biggest,list[i].index)<1){
            biggest = list[i].index;
        }
    }
    index.push_back(biggest);
    index.push_back(smallest);   
    }
    return(index);
}
