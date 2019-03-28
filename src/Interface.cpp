#include "Main.hpp"
void interface(){
    std::vector<Tgroup_of_students> groups;
    int number_of_groups=0;
    std::string frame(MAX_LINE,'*');
while(true){
    std::cout.width(MAX_LINE);
    std::cout<<frame<<std::endl;
    std::cout<<"ROBCO INDUSTRIES (TM) TERMLINK PROTOCOL"<<std::endl;
    std::cout<<"What would you like to do today?"<<std::endl;
    std::cout<<"[1] Add student to the group"<<std::endl;
    std::cout<<"[2] Add a new group"<<std::endl;
    std::cout<<"[3] Merge two groups together"<<std::endl;
    std::cout<<"[4] Find the common part of groups"<<std::endl;
    std::cout<<"[5] Show me the groups"<<std::endl;
    std::cout<<"[6] Find the biggest and smallest index"<<std::endl;
    std::cout<<"[7] Exit"<<std::endl;
    std::cout<<frame<<std::endl;
    std::cout<<"Your answer?"<<std::endl;
    std::cout<<"______";
    int ans;
    std::cin>>ans;
        std::cin.clear();
        std::cin.ignore(TRASH_MAX,'\n');
    switch(ans){
        case(1):{
            clrscrs();
            if(number_of_groups==0){
                std::cout<<"At first, you must add a new group"<<std::endl;
                Tgroup_of_students group1;
                groups.push_back(group1);
                number_of_groups++;
                Tstudent stud_a;
                groups[0].add_new_student(stud_a);
            }else{
                int ans =group_choosing(groups,number_of_groups);
                Tstudent stud_a;
                groups[ans].add_new_student(stud_a);
            }
           break; 
        }
        case(2):{
            clrscrs();
            Tgroup_of_students new_group;
            number_of_groups++;
            groups.push_back(new_group);
            break;
        }
        case(3):{
            clrscrs();
             if(number_of_groups<2){
                std::cout<<"Error, you do not have enough groups."<<std::endl;
                std::cout<<"Hint: Add a new group, before this operation"<<std::endl;
            }else{
                std::cout<<"You will now choose two groups to merge."<<std::endl;
                int ans1 =group_choosing(groups,number_of_groups);
                int ans2=group_choosing(groups,number_of_groups);
                Tgroup_of_students group_merge = groups[ans1]+groups[ans2];
                std::cout<<group_merge<<std::endl;
            }
            break;
        }
        case(4):{
            clrscrs();
            if(number_of_groups<2){
                std::cout<<"Error, you do not have enough groups."<<std::endl;
                std::cout<<"Hint: Add a new group, before this operation"<<std::endl;
            }else{
                std::cout<<"You will now choose two groups to find the common part."<<std::endl;
                int ans1 =group_choosing(groups,number_of_groups);
                int ans2=group_choosing(groups,number_of_groups);
                Tgroup_of_students group3 =groups[ans1]*groups[ans2];
                std::cout<<group3<<std::endl;
            }
            break;
        }
        case(5):{
            clrscrs();
            if(number_of_groups==0){
                std::cout<<"Error, there is no groups to show."<<std::endl;
            }else
            for(int i=0; i<number_of_groups;i++){
                 std::cout<<" ["<<i+1<<"] "<<groups[i]<<std::endl;
            }
            break;
        }
        case(6):{
            clrscrs();
            if(number_of_groups==0){
                std::cout<<"Error, you did not add any group."<<std::endl;
            }else {
            int ans =group_choosing(groups,number_of_groups);
            std::vector<std::string> index = groups[ans].indexes();
            std::cout<<"Biggest index: "<<index[0]<<std::endl;
            std::cout<<"Smallest index: "<<index[1]<<std::endl;      
            }
            break;
        }
        case(7):{
            clrscrs();
            std::cout<<"Goodbye."<<std::endl;
            exit(1);
        }
        default:{
            std::cout<<"I'm sorry you cannot choose option "<<ans<<std::endl;
            std::cout<<"Please, try once again."<<std::endl;
        }
    }
}
}
