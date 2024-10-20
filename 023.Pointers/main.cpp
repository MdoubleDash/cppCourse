#include <iostream>


int main(){

    int a = 0;
    int x = 7;
    int* px = &x;
    int* px2 = &x;
    int **dpx = &px;

    // update the value of x
    x = 9;

    std::cout << "x stores: " << x << "\n";
    std::cout << "x address: " << &x << "\n";
    std::cout << "x type: " << typeid(x).name() << "\n";
    std::cout << std::endl;
    std::cout << "px stores: " << px << "\n";
    std::cout << "px address: " << &px << "\n";
    std::cout << "px type: " << typeid(px).name() << "\n";
    std::cout << "px derefernced: " << *px << "\n";
    std::cout << std::endl;
    std::cout << "px2 stores: " << px2 << "\n";
    std::cout << "px2 derefernced: " << *px2 << "\n";
    std::cout << std::endl;
    std::cout << "ppx stores: " << dpx << "\n";
    std::cout << "ppx address: " << &dpx << "\n";
    std::cout << "ppx type: " << typeid(dpx).name() << "\n";
    std::cout << "ppx derefernced: " << *dpx << "\n";
    std::cout << "ppx derefernced twice: " << **dpx << std::endl;

    return 0;
}