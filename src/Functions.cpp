#include "Main.h"
bool is_it_int(char* tab,int size){
    if((int)strlen(tab)<size){
        std::cout<<"Error, too short."<<std::endl;
        return false;
    }
    if((int)strlen(tab)>size){
        std::cout<<"Error, too long."<<std::endl;
        return false;
    }
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
            st<<"["<<i+1<<"]"<<group.list[i]<<std::endl;
        }
    }
    return st;
}
std::ostream& operator<<(std::ostream& st, Tstudent student){
    st<<student.surname<<" "<<student.name<<" "<<student.index<<std::endl;
    return st;
}
int compare_index(char* index1, char* index2)
{
    if(strcmp(index1,index2)>0)
        return 1;
    if(strcmp(index1,index2)<0)
        return -1;
    return 0;
}
int compare_index(Tstudent stud1, Tstudent stud2)
{
    char* index1 =stud1.index;
    char* index2 = stud2.index;
    return compare_index(index1,index2);
}

void clrscrs(void){
        system("@cls||clear");
}
void show_me_groups(std::vector<Tgroup_of_students> list, int number_of_groups)
{
    for(int i=0;i<number_of_groups;i++){
        std::cout<<" ["<<i+1<<"] "<<list[i].name_group<<std::endl;
    }
}
int group_choosing(std::vector<Tgroup_of_students> groups, int number_of_groups)
{
    show_me_groups(groups,number_of_groups);
    int ans=0;
    while (ans>number_of_groups){
        std::cout<<"Choose one group:"<<std::endl;
        std::cin>>ans; 
                }
    return ans;
}
