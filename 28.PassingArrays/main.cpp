#include <iostream>
#include <vector> 
#include <array>

void PrintVector(const std::vector<int>& vec){ //, size_t size if we were using an array

    //std::cout << "sizeof(arr) " << sizeof(arr) << std::endl;
     for (int i=0; i<vec.size(); i++){
        std::cout << vec[i] << std::endl;

     }

}

int main(){
     
    //int array[] = {1,3,5,7};
    //std::array<int, 5> array = {1,3,5,7,9};
    std::vector<int> myVec = {1,3,5,7,9};

    PrintVector(myVec);

    return 0;
}