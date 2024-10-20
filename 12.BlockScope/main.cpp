#include <iostream>
#include <string>

// int x = 42; //global scope

int main(){
    
    {
        int x = 7;
        std::cout << x << std::endl;
    }
   
    // std::cout << x << std::endl;
    int x = 41;
    std::cout << x << std::endl;

    return 0;
}