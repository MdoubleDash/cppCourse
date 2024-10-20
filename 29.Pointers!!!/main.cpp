#include <iostream>

// int* returnMemory(){
//     int result = 42;
//     return &result;
// }

int main(){

    //int* px = nullptr;
    //*px = 42; //Segmentation error - nullptr dereference 

    int* array = new int[1000];
    // delete array; // memory leaks

    // int* px = returnMemory();
    // std::cout << "*px: " << *px << std::endl;



    return 0;
}