#include <iostream>

//"Forward declaration"
//Function declation
int countdown(int);



int main(){
    
    countdown(5000); // larger number can cause stack overflow
}

int countdown(int n){

    if (n == 0)
    {
        std::cout << "0... blast off!!!" << std::endl;
        return 0;
    }

    std::cout << n << std::endl;
    return countdown(n-1);
}
