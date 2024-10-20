#include <iostream>
#include <vector>
// this allows us to allocate resources at runtime
// that resources is returned to us in a pointer
int main(){

    // Local variable (primitive type)
    int x = 7;

    // A pointer
    int* px = &x;

    // A STACK allocated array
    int array[] = {1, 3, 5, 7, 9};

    // A HEAP allocated array
    int* dynamicallyAllocatedArray = new int[1000];

    // VECTOR of integers
    std::vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    // Output
    std::cout << "x                        : " << sizeof(x) << std::endl;
    std::cout << "px                       : " << sizeof(px) << std::endl;
    std::cout << "array                    : " << sizeof(array) << std::endl;
    std::cout << "dynamicallyAllocatedArray: " << sizeof(dynamicallyAllocatedArray) << std::endl;
    std::cout << "v                        : " << sizeof(v) << std::endl;
    std::cout << "v size                   : " << v.size() << std::endl;

    delete dynamicallyAllocatedArray;
    return 0;   
}