#include <iostream>
#include <string>
#include "IntArray.hpp"

// Constructor
IntArray::IntArray(std::string name) : m_name(name), m_data(new int[10]){
    std::cout << "Constructing " << m_name << std::endl;
}
// Destructor
IntArray::~IntArray(){
    delete[] m_data;
    std::cout << "Destructing " << m_name << std::endl;
}
// Copy Constructor
IntArray::IntArray(const IntArray& rhs) : m_name(rhs.m_name + "(copy)"), m_data(new int[10]){
    m_name = rhs.m_name + "_copy";
    m_data = new int[10];
    for(int i = 0; i < 10; i++){
        m_data[i] = rhs.m_data[i];
    }
    std::cout << m_name << " Copying (constructor) from " << rhs.m_name << std::endl;
}
// Copy Assignment Operator
IntArray& IntArray::operator=(const IntArray& rhs){
    if(this != &rhs){
    delete[] m_data;
    m_name = rhs.m_name + "(copy)";
    m_data = new int[10];
    for(int i = 0; i < 10; i++){
        m_data[i] = rhs.m_data[i];
    std::cout << m_name << " Copying (assignment) from " << rhs.m_name << std::endl;
    }
    }
    return *this;
}
// Move Constructor
IntArray::IntArray(IntArray&& source){
    m_name = source.m_name;
    m_data = source.m_data;
    std::cout << m_name << " moving from (constructed) " << source.m_name << std::endl;      
    source.m_data = nullptr;
    source.m_name = "";
}
// Move Assignment Operator
IntArray& IntArray::operator=(IntArray&& source){
    if(this != &source){
        m_name = source.m_name;
        m_data = source.m_data;
        std::cout << m_name << " moving from (assigned) " << source.m_name << std::endl;
        source.m_data = nullptr;
        source.m_name = "";
    }
    return *this;

}
