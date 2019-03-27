#include "/home/magdalena/Dokumenty/PW_projects/PROGRAMOWANIE_C++/Lab1/include/Main.hpp"
bool is_it_int(char* tab,int size){
    if((int)strlen(tab)<size-1){
        std::cout<<"Error, too short."<<std::endl;
        return false;
    }else if((int)strlen(tab)==size-1){
                 for(int i=0; i<size-1; i++){
        if(!isdigit(tab[i]))
            return false;  
    }
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
int compare_index(std::string index1,std::string index2)
{
    if(index1>index2)
        return 1;
   else if(index1<index2)
        return -1;
    return 0;
}
int compare_index(Tstudent stud1, Tstudent stud2)
{
    std::string index1 =stud1.index;
    std::string index2 = stud2.index;
    return compare_index(index1,index2);
}

void clrscrs(void){
        system("@cls||clear");
}
void clean(void)
{
        char c;
        do
        {
                c = getchar();
        } while(c!= '\n' && c!= EOF);
}
void show_me_groups(std::vector<Tgroup_of_students> list, int number_of_groups)
{
    for(int i=0;i<number_of_groups;i++){
        std::cout<<" ["<<i+1<<"] "<<list[i].name_group<<" "<<list[i].number_of_students<<std::endl;      
        }
}
int group_choosing(std::vector<Tgroup_of_students> groups, int number_of_groups)
{
    show_me_groups(groups,number_of_groups);
    int ans=0;
    do{
        std::cout<<"Choose one group:"<<std::endl;
        (std::cin>>ans).get(); 
        }while(ans > number_of_groups);
    return ans-1;
}
