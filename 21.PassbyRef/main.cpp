#include <iostream>
#include <vector>
#include <algorithm>

void PassByValue(std::vector<int> arg){
        arg[0] = 99;
}

void PassByRef(std::vector<int>& alias){ 
    alias[0] = 99;
}

// time the program by Measure-Command {.\prog.exe}
int main(){
    
    std::vector<int> x;
    x.reserve(10000000000);
    std::fill(std::begin(x), std::end(x), 1);

    // Call our functions
    //PassByValue(x);
     PassByRef(x);
    

    return 0;
}

/*
// pass by value
void PassByValue(int arg){
    std::cout << "PassByValue:\tinitial arg is " << arg << std::endl;
    std::cout << "PassByValue:\tinitial arg address " << &arg << std::endl;
    arg = 9999;
    std::cout << "PassByValue:\targ is set to " << arg << std::endl;
    std::cout << "PassByValue:\tfinal arg address " << &arg << std::endl;
}

// pass by ref

void PassByRef(int& alias){ // spoiler: pointer!!!
    std::cout << "PassByRef:\tinitial value is " << alias << std::endl;
    std::cout << "PassByRef:\tinitial value address " << &alias << std::endl;
    alias = 9999;
    std::cout << "PassByRef:\tvalue is set to " << alias << std::endl;
    std::cout << "PassByRef:\tfinal value address " << &alias << std::endl;
}


int main(){
    
    int x = 42;
    std::cout << "x's value is " << x << std::endl;
    std::cout << "x's address is " << &x << std::endl;
    
    // Call our function
    PassByValue(x);

    // Check x again
    std::cout << "x's value is " << x << std::endl;
    std::cout << "x's address is " << &x << std::endl;   

    // Call our function
    PassByRef(x);

    // Check x again
    std::cout << "x's value is " << x << std::endl;
    std::cout << "x's address is " << &x << std::endl;   
    
    return 0;
}
*/
