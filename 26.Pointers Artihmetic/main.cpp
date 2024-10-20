#include <iostream>

int main(){

    int array[] = {1, 3, 5, 7, 9};  // contiguous block of memory
    // be carefull with raw arrays, don't go out of bounds!!!
    int* pa = array;
    
    std::cout << array[0] << std::endl;
    std::cout << "pa is: "    << pa  << std::endl;
    // Show the array offset
    std::cout << *(pa+0)    << std::endl; // pointer arithmetic
    std::cout << *(pa+1)    << std::endl;
    std::cout << *(pa+2)    << std::endl;
    std::cout << *(array+3) << std::endl; // same as array[3]; brackets are "basically" dereferencing the address
    std::cout << *(array+4) << std::endl;

    // pa++;
    // std::cout << "pa value: " << *pa << std::endl;
    // std::cout << "pa is: "    << pa  << std::endl;
    

    return 0;
}