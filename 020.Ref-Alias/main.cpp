#include <iostream>
#include <typeinfo>

int main(){
    
    int x = 42;
    // "int&" is the full type, for a reference type
    int& ref = x;

    std::cout << "x's value is " << x << std::endl;
    std::cout << "x's address is " << &x << std::endl;
    std::cout << "x's type info is " << typeid(x).name() << std::endl;
    std::cout << std::endl;
    std::cout << "ref's value is " << ref << std::endl;
    std::cout << "ref's address is " << &ref << std::endl;
    std::cout << "ref's type info is " << typeid(ref).name() << std::endl;
 
    return 0;
}

