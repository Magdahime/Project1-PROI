#include "Main.h"
#include "Student.h"
   void Tstudent::operator<<(Tstudent student_a)
{
    std::cout<<student_a.name<<" "<<student_a.surname<<" "<<student_a.index<<std::endl;
}
