#include <iostream>

// pop quiz!!!
int main(){

   
    int x = 7;
    int* px = &x;
   
    // What happens if I derefernce 'px'?
    // That is, what will 'x stores'?
    *px = 42;

    std::cout << "x stores: " << x << std::endl;
    
    return 0;
}