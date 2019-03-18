#include "Main.h"
#include "Functions.h"
void interface(){
    std::vector<Tgroup_of_students*> groups;
    std::string frame(MAX_LINE,'*');
while(true){
    std::cout.width(MAX_LINE);
    std::cout<<frame;
    std::cout<<"What would you like to do today?"<<std::endl;
    std::cout<<"[1] Add student to the group"<<std::endl;
    std::cout<<"[2] Add a new group"<<std::endl;
    std::cout<<"[3] Merge two groups together"<<std::endl;
    std::cout<<"[4] Find the common part of groups"<<std::endl;
    std::cout<<"[5] Show me the groups"<<std::endl;
    std::cout<<"[6] Find the biggest and smallest index"<<std::endl;
    std::cout<<"[7] Exit"<<std::endl;
    std::cout<<frame;
    int ans;
    std::cin>>ans;
    switch(ans){
        case(1):{
            
           break; 
        }
        case(2):{
            break;
        }
        case(3):{
            break;
        }
        case(4):{
            break;
        }
        case(5):{
            break;
        }
        case(6):{
            break;
        }
        case(7):{
            exit(1);
        }
        default:{
            std::cout<<"I'm sorry you cannot choose option "<<ans<<std::endl;
            std::cout<<"Please, try once again."<<std::endl;
        }
    }
}
}
