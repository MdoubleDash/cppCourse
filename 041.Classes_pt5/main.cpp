
#include <iostream>
#include "Array.hpp"

// this is not allowed if copy constructor is private or deleted
// void passByCopy(Array a){
//     // Do Nothing   
// }

void passByRef(const Array& a){
    // Do Nothing   
}

int main(){

    // Intitialize all of our data up front
    Array myArray(1000000);
    myArray.SetData(0, 123456);  

    //Array myArray2 = myArray; // copy constructor
    
    //myArray.PrintData();
    //myArray.PrintData();

    for (int i = 0; i < 100; i++)
    {
        passByRef(myArray);
    }

    return 0;
}

