#include <iostream>
#include <numeric>
#include <iterator>
#include <array>

int main(){
     
    std::array<int, 100> ids; 

    std::iota(std::begin(ids), std::end(ids), 10);
    ids.at(99) = 9;

    for (int i = 0; i < 100; i++)
    {
        std::cout << ids[i] << std::endl;
    }

    return 0;
}