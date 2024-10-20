#include <iostream>
#include <string>
#include <utility>

//using namespace std;
 
int main(){

    std::string myString = "copy construct me";
    std::string newValue;
    //copy
    // newValue = myString;
    std::cout << "myString: " << myString << std::endl;
    std::cout << "newValue: " << newValue << std::endl;

    // std::move allows to adopt or steal the value
    newValue = std::move(myString);

    // the explicit call - static cast
    //newValue = static_cast<std::string&&>(myString);
    std::cout << "myString: " << myString << std::endl;
    std::cout << "newValue: " << newValue << std::endl;

    return 0;
}