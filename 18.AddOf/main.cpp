#include <iostream>

void foo(){
  // test
}


int main(){

    int x = 42;
    float y = 72.1f;
    char a = 'a';
    signed char b = 'b';
    unsigned char c = 'c';

    std::cout << "x: " << &x << std::endl;
    std::cout << "size of x's " << sizeof(x) << std::endl;
    std::cout << "y: " << &y << std::endl;
    std::cout << "size of y's " << sizeof(y) << std::endl;
    std::cout << "y value: " << y << std::endl;
    std::cout << "a: " << (void*)&(a) << std::endl;
    std::cout << "b: " << (void*)&(b) << std::endl;
    std::cout << "c: " << (void*)&(c) << std::endl;
    std::cout << "foo: " << (void*)&foo << std::endl;
    std::cout << "main: " << (void*)&main << std::endl;
    
    return 0;
}

