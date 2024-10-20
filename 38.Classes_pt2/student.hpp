#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

//default constructor and destructor if we comment those out in interface and implementation
class Student{ //Student is our new UDT
    public:
        //Special actions
        // Contructor
        Student();
        Student(std::string name, float score);
        //Destructor
        ~Student();
        void setName(std::string);
        void setScore(float);
        
    private:
        float student_score;
        std::string student_name;
};

#endif