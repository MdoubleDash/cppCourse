#include "student.hpp"

#include <iostream>
//Special actions
// Contructor
Student::Student(){
      student_name = "no name";
      student_score = 0.f;
      std::cout << "Contructor" << std::endl;
      std::cout << "name is " << student_name << std::endl;
      std::cout << "score is " << student_score << std::endl;
      }

Student::Student(std::string name, float score){
      student_name = name;
      student_score = score;
      std::cout << "Contructor" << std::endl;
      std::cout << "name is " << student_name << std::endl;
      std::cout << "score is " << student_score << std::endl;
      }

//Destructor
Student::~Student(){
      std::cout << "Destructor:" << student_name << std::endl;
      }
void Student::setName(std::string name){
      student_name = name;
      std::cout << "name is " << student_name << std::endl;
      }
void Student::setScore(float score){
      student_score = score;
      std::cout << student_name << " score is " << student_score << std::endl;
      }