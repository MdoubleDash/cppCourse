#include <iostream>
#include <array>
#include <algorithm>

int main(){
    
    /*
    int arr[] = {1, 3, 5};
    std::array<int, 3> arr2{1, 3, 5};

    // for (int i = 0; i < arr2.size(); i++)
    // {
    //     std::cout << arr2.at(i) << std::endl;
    // }

    //range-based for loops
    for(auto& element: arr2){
        std::cout << element << std::endl;
    }
    std::cout << std::endl;

    int countdown = 3;
    while(countdown > 0){
        std::cout << countdown << std::endl;
        countdown--;
    }
    
    std::cout << std::endl;

    countdown = 3;
    do
    {
        std::cout << countdown << std::endl;
        countdown--;
    } while (countdown > 0);
    */

   std::array<int, 3> myArray;
   std::fill(std::begin(myArray), std::end(myArray), 1024);

   for (int element : myArray)
   {
    std::cout << element << std::endl;
   }
   

    
    return 0;
}