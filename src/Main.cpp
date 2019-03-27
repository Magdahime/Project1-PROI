#include "/home/magdalena/Dokumenty/PW_projects/PROGRAMOWANIE_C++/Lab1/include/Main.hpp"
void test1(void);
void test2(void);
void test3(void);
void test4(void);
void test5(void);
void test6(void);
#ifdef TEST
void test1(void);
void test2(void);
void test3(void);
void test4(void);
void test5(void);
void test6(void);
int main(void){
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    return(0);
}
void test1()
{
    std::cout<<"Start test1: Creating groups"<<std::endl;
Tgroup_of_students group_A;
std::cout<<group_A;
    std::cout<<"End of the test"<<std::endl;
    std::cout<<"\n\n\n\n\n"<<std::endl;
    std::cout<<"Press any key to continue..."<<std::endl;
    std::cin.sync(); 
    std::cin.get(); 
}
void test2(){
    std::cout<<"Start test2: Creating students"<<std::endl;
    Tstudent student_a;
std::cout<<student_a;
    std::cout<<"End of the test"<<std::endl;
    std::cout<<"\n\n\n\n\n"<<std::endl;
    std::cout<<"Press any key to continue..."<<std::endl;
    std::cin.sync(); 
    std::cin.get(); 
}
void test3()
{
    std::cout<<"Start test3: Adding student to groups"<<std::endl;
    std::cout<<"Creating the students and group."<<std::endl;
    Tgroup_of_students gr_test;
    Tstudent stud_a;
    Tstudent stud_b;
    std::cout<<"Adding students"<<std::endl;
    gr_test.add_new_student(stud_a);
    gr_test.add_new_student(stud_b);
    std::cout<<gr_test;
    std::cout<<"End of the test"<<std::endl;
    std::cout<<"\n\n\n\n\n"<<std::endl;
    std::cout<<"Press any key to continue..."<<std::endl;
    std::cin.sync(); 
    std::cin.get(); 
}
void test4()
{
    std::cout<<"Start test4: Merging groups together and finding the common part"<<std::endl;
    std::cout<<"Making groups: "<<std::endl;
    Tgroup_of_students gr_test1;
    Tgroup_of_students gr_test2;
    std::cout<<"Making students "<<std::endl;
char* index1=(char*)"123456";
char* index2=(char*)"123456";
char* index3=(char*)"234567";
char* index4=(char*)"345671";
char* index5=(char*)"100001";
char* index6=(char*)"127812";
char* index7=(char*)"300214";
char* index8=(char*)"336281";
char* index9=(char*)"900128";
char* index10=(char*)"374491";
Tstudent stud1 = Tstudent("X","Y",index1);
Tstudent stud2 = Tstudent("X","Y",index9);
Tstudent stud3 = Tstudent("X","Y",index3);
Tstudent stud4 = Tstudent("X","Y",index4);
Tstudent stud5 = Tstudent("X","Y",index5);
Tstudent stud6 = Tstudent("X","Y",index6);
Tstudent stud7 = Tstudent("X","Y",index7);
Tstudent stud8 = Tstudent("X","Y",index8);
Tstudent stud9 = Tstudent("X","Y",index2);
Tstudent stud10 = Tstudent("X","Y",index2);
Tstudent stud11 = Tstudent("X","Y",index4);
Tstudent stud12 = Tstudent("X","Y",index8);
Tstudent stud13 = Tstudent("X","Y",index10);
std::cout<<"Adding students to groups: "<<std::endl;
gr_test1.add_new_student(stud1);
gr_test1.add_new_student(stud2);
gr_test1.add_new_student(stud12);
gr_test1.add_new_student(stud9);
gr_test1.add_new_student(stud7);
gr_test1.add_new_student(stud11);
gr_test2.add_new_student(stud3);
gr_test2.add_new_student(stud4);
gr_test2.add_new_student(stud8);
gr_test2.add_new_student(stud6);
gr_test2.add_new_student(stud10);
gr_test2.add_new_student(stud5);
gr_test2.add_new_student(stud13);
std::cout<<"Status of the groups: "<<std::endl;
std::cout<<gr_test1<<std::endl;
std::cout<<gr_test2<<std::endl;
std::cout<<"The common part: "<<std::endl;
Tgroup_of_students gr_test3 = gr_test1*gr_test2;
std::cout<<gr_test3;
std::cout<<"Merging two groups together. "<<std::endl;
Tgroup_of_students gr_test4= gr_test1+gr_test2;
std::cout<<gr_test4;
std::cout<<"End of the test"<<std::endl;
std::cout<<"\n\n\n\n\n"<<std::endl;
std::cout<<"Press any key to continue..."<<std::endl;
std::cin.sync(); 
std::cin.get(); 
}
void test5()
{
     std::cout<<"Start test5: Finding biggest and smallest index."<<std::endl;
     std::cout<<"Creating students and group:"<<std::endl;
    Tgroup_of_students gr_test1;
char* index1=(char*)"123456";
char* index2=(char*)"123456";
char* index3=(char*)"234567";
char* index4=(char*)"345671";
char* index5=(char*)"100001";
char* index6=(char*)"127812";
char* index7=(char*)"300214";
char* index8=(char*)"336281";
char* index9=(char*)"900128";
char* index10=(char*)"374491";
Tstudent stud1 = Tstudent("X","Y",index1);
Tstudent stud2 = Tstudent("X","Y",index2);
Tstudent stud3 = Tstudent("X","Y",index3);
Tstudent stud4 = Tstudent("X","Y",index4);
Tstudent stud5 = Tstudent("X","Y",index5);
Tstudent stud6 = Tstudent("X","Y",index6);
Tstudent stud7 = Tstudent("X","Y",index7);
Tstudent stud8 = Tstudent("X","Y",index8);
Tstudent stud9 = Tstudent("X","Y",index9);
Tstudent stud10 = Tstudent("X","Y",index10);
std::cout<<"Adding students to group: "<<std::endl;
gr_test1.add_new_student(stud1);
gr_test1.add_new_student(stud2);
gr_test1.add_new_student(stud5);
gr_test1.add_new_student(stud6);
gr_test1.add_new_student(stud7);
gr_test1.add_new_student(stud3);
gr_test1.add_new_student(stud4);
gr_test1.add_new_student(stud8);
gr_test1.add_new_student(stud9);
gr_test1.add_new_student(stud10);
std::cout<<"Searching for biggest and smallest index in the group: "<<std::endl;
std::vector<char*> index_list = gr_test1.indexes();
std::cout<<"Result: "<<std::endl;
std::cout<<"Biggest index: "<<index_list[0]<<std::endl;
std::cout<<"Smallest index: "<<index_list[1]<<std::endl;
std::cout<<"End of the test"<<std::endl;
std::cout<<"\n\n\n\n\n"<<std::endl;
    std::cout<<"Press any key to continue..."<<std::endl;
    std::cin.sync(); 
    std::cin.get(); 
}
void test6()
{
    std::cout<<"Start test6: Testing new operators +=/*=."<<std::endl;
    std::cout<<"Creating groups and students: "<<std::endl;
    Tgroup_of_students gr_test1;
    Tgroup_of_students gr_test2;
char* index1=(char*)"123456";
char* index2=(char*)"123456";
char* index3=(char*)"234567";
char* index4=(char*)"345671";
char* index5=(char*)"100001";
char* index6=(char*)"127812";
char* index7=(char*)"300214";
char* index8=(char*)"336281";
char* index9=(char*)"900128";
char* index10=(char*)"374491";
Tstudent stud1 = Tstudent("X","Y",index1);
Tstudent stud2 = Tstudent("X","Y",index9);
Tstudent stud3 = Tstudent("X","Y",index3);
Tstudent stud4 = Tstudent("X","Y",index4);
Tstudent stud5 = Tstudent("X","Y",index5);
Tstudent stud6 = Tstudent("X","Y",index6);
Tstudent stud7 = Tstudent("X","Y",index7);
Tstudent stud8 = Tstudent("X","Y",index8);
Tstudent stud9 = Tstudent("X","Y",index2);
Tstudent stud10 = Tstudent("X","Y",index2);
Tstudent stud11 = Tstudent("X","Y",index4);
Tstudent stud12 = Tstudent("X","Y",index8);
Tstudent stud13 = Tstudent("X","Y",index10);
std::cout<<"Adding students to groups: "<<std::endl;
gr_test1.add_new_student(stud1);
gr_test1.add_new_student(stud2);
gr_test1.add_new_student(stud12);
gr_test1.add_new_student(stud9);
gr_test1.add_new_student(stud7);
gr_test1.add_new_student(stud11);
gr_test2.add_new_student(stud3);
gr_test2.add_new_student(stud4);
gr_test2.add_new_student(stud8);
gr_test2.add_new_student(stud6);
gr_test2.add_new_student(stud10);
gr_test2.add_new_student(stud5);
gr_test2.add_new_student(stud13);
std::cout<<"Merging two groups together: (operator +)"<<std::endl;
Tgroup_of_students gr_test3= gr_test1+gr_test2;
std::cout<<gr_test3;
std::cout<<"Merging two groups together: (operator +=)"<<std::endl;
gr_test1+=gr_test2;
std::cout<<gr_test1;
std::cout<<"End of the test"<<std::endl;
std::cout<<"\n\n\n\n\n"<<std::endl;
    std::cout<<"Press any key to continue..."<<std::endl;
    std::cin.sync(); 
    std::cin.get(); 
}
#else 
int main(void){
    interface();
    return 0;
}
#endif
