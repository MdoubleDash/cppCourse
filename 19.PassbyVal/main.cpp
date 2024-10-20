#include <iostream>


// pass by value
void SetValue(int arg){
    std::cout << "SetValue:\tinitial arg is " << arg << std::endl;
    std::cout << "SetValue:\tinitial arg address " << &arg << std::endl;
    arg = 9999;
    std::cout << "SetValue:\targ is set to " << arg << std::endl;
    std::cout << "SetValue:\tfinal arg address " << &arg << std::endl;
}


int main(){
    
    int x = 42;
    std::cout << "x's value is " << x << std::endl;
    std::cout << "x's address is " << &x << std::endl;
    
    // Call our function
    SetValue(x);

    // Check x again
    std::cout << "x's value is " << x << std::endl;
    std::cout << "x's address is " << &x << std::endl;   
    
    return 0;
}

