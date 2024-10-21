
#include <iostream>
#include "Array.hpp"

int main(){

    // Intitialize all of our data up front
    Array myArray;

    myArray.SetData(0, 100);
    myArray.SetData(1, 11);
    myArray.SetData(2, 44);
    myArray.PrintData();
    std::cout << std::endl; // just to insert a break line

    Array myArray2 = myArray; // basically myArray2.data = myArray.data (pointers)
    myArray2.PrintData();
    std::cout << std::endl;

    Array myArray3;
    myArray3 = myArray2;
    myArray3.PrintData();
    std::cout << std::endl;

    std::cout << &myArray  << std::endl;
    std::cout << &myArray2 << std::endl;
    std::cout << &myArray3 << std::endl;
    std::cout << std::endl;

    return 0;
}

