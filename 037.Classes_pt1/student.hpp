#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student{ //Student is our new UDT
    public:
        //Special actions
        // Contructor
        Student();
        //Destructor
        ~Student();
        void printName();
        void setScore(float);
    
    public:
        std::string student_name;
    private:
        float student_score;
};

#endif