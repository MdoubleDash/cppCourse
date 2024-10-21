#include <iostream>
#include "Array.hpp"

// (1)constructor
Array::Array(){
     std::cout << "Constructor" << std::endl;
            for (int i = 0; i < 10; i++){
                data.push_back(i);
            }
}
// (2) destructor
Array::~Array(){
            std::cout << "Destructor" << std::endl;
     }
// (3) copy constructor
Array::Array(const Array& rhs){
     std::cout << "Copy Constructor" << std::endl;
     for (int i = 0; i < 10; i++){
          data.push_back(rhs.data[i]);
          }
     }
// (3 or 4) copy assignment operator        
Array& Array::operator=(const Array& rhs){
     std::cout << "Copy Assignment Operator" << std::endl;
     if(&rhs == this){
          return *this;
          } 
     data.clear();
     for(int i = 0; i < 10; i++){
          data.push_back(rhs.data[i]);
          }
     return *this;
     }
// print
void Array::PrintData(){
     for (int i = 0; i < 10; i++){
          std::cout << data[i] << std::endl;
          }
     }
// set
void Array::SetData(int index, int value){
     data[index] = value;
     }