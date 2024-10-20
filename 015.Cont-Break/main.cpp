#include <iostream>
#include <array>
#include <algorithm>

int main(){
    
    for(int x = 0; x < 3 ; x++){
          
        for (int i = 0; i < 10; i++) {
            std::cout << "start of inner loop" << std::endl;
            continue;
            std::cout << "i is: " << i << std::endl;

        }
        
        break;
        std::cout << "x is: " << x << std::endl;
        
        
    }
    
    return 0;
}