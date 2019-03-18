#include "Main.h"
#include "Group_of_students.h"
#include "Student.h"
#include "Functions.h"
void test1(void);
void test2(void);
void test3(void);
void test4(void);
int main(void){
    //test1();
    //test2();
    //test3();
    test4();
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
void test3()
{
    Tgroup_of_students gr_test;
    gr_test.add_new_student();
    gr_test.add_new_student();
    std::cout<<gr_test;
}
void test4()
{
    Tgroup_of_students gr_test1;
    Tgroup_of_students gr_test2;
    gr_test1.add_new_student();
    gr_test1.add_new_student();
    gr_test2.add_new_student();
    gr_test2.add_new_student();
    Tgroup_of_students *gr_test3 = gr_test1*gr_test2;
    std::cout<<*gr_test3;
}
