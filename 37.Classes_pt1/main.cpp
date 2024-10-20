#include "student.hpp"
 
int main(){

    Student mike;
    mike.student_name = "Mike S.";
    mike.printName();
    mike.setScore(12.5f);

    Student sue;
    sue.student_name = "Sue M.";
    sue.printName();

    return 0;
}