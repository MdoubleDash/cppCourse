#include <iostream>
#include <vector>
#include <string>
#include "IntArray.hpp"

IntArray foo(){
    IntArray result("foo() created array");
    return result;
}

void foocpy(IntArray& temp){
}

void fooref(IntArray& temp){
    std::cout << "Pass by Ref" << std::endl;
}

int main(){

    //IntArray array1("array1");
    // Copy made
    //IntArray array2 = array1;
    //IntArray array2 = foo(); // compiler will optimize this to a move
    //fooref(array1);
    //foocpy(array1);

    std::vector<IntArray> myArrays;
    myArrays.reserve(10);
    for (int i = 0; i < 10; i++){
        IntArray temp(std::to_string(i));
        myArrays.push_back(std::move(temp));
    }
    
    return 0;
}