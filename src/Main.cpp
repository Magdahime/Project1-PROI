#include "Main.h"
#include "Group_of_students.h"
#include "Student.h"
#include "Functions.h"
void test1(void);
void test2(void);
int main(void){
    test1();
    test2();
    return 0;
}
void test1()
{
    std::cout<<"Start test1: Creating groups"<<std::endl;
Tgroup_of_students group_A;
std::cout<<group_A;
    std::cout<<"End of the test"<<std::endl;
}
void test2(){
    std::cout<<"Start test2: Creating students"<<std::endl;
    Tstudent student_a;
std::cout<<student_a;
}
