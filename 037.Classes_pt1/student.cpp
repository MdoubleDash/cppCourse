#include "student.hpp"

#include <iostream>
//Special actions
// Contructor
Student::Student(){
      std::cout << "Contructor" << std::endl;
      }
//Destructor
Student::~Student(){
      std::cout << "Destructor" << std::endl;
      }
void Student::printName(){
      std::cout << "name is " << student_name << std::endl;
      }
void Student::setScore(float student_score){
      student_score = student_score;
      std::cout << student_name << " score is " << student_score << std::endl;
      }