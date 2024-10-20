#include <iostream>

//"Forward declaration"
//Function declation
int add(int, int);
auto add(float, float) -> float;

void print(void){
    std::cout << "hello functions!" << std::endl;
}


int main(){
    
    print();
    std::cout << "int add(int, int) is called" << std::endl;
    std::cout << add(1, 2) << std::endl;
    std::cout << "float add(float, float) is called" << std::endl;
    std::cout << add(1.2f, (float)5) << std::endl;
    
    return 0;
}

int add(int a, int b){

    return a + b;
}

float add(float a, float b){

    return a + b;
}
