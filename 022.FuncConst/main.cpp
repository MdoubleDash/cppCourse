#include <iostream>
#include <vector>
#include <algorithm>

void PassByRef(const std::vector<int>& alias){ 
    //using const ensuring data won't get modified
    // alias[0] = 99;
}

int main(){

    std::vector<int> x(10000000);
    std::fill(std::begin(x), std::end(x), 1);

    PassByRef(x);

    std::cout << x[0] << std::endl;

    return 0;
}

/*
#include <iostream>
#include<type_traits>

int main(){

    const float PI = 3.141526;
    std::cout << PI << std::endl;
    //PI = 42; //immutable
    std::cout << std::is_const<decltype(PI)>::value << std::endl;

    std::cout << std::is_const_v<int> << std::endl;
    std::cout << std::is_const_v<const int> << std::endl;

    return 0;
}
*/