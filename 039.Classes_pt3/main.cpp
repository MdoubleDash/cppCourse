#include <iostream>

/* 
By default we get a constructor, a destrucotr, a copy-constructor, ...
... and a copy assingment operator
BUT it does a "shallow copy"!
We do need a "deep copy" for dynamically allocated memory; 
so need to write our own copy constructor
*/
class Array{
    public:
        // constructor
        Array(){
            std::cout << "Constructor" << std::endl;
            data = new int[10];
            for (int i = 0; i < 10; i++){
                data[i] = i*i;
            }
        }
        // destructor
        ~Array(){
            std::cout << "Destructor" << std::endl;
            delete[] data;
        }
        // copy constructor
        Array(const Array& rhs){
            std::cout << "Copy Constructor" << std::endl;
            data = new int[10];
            for (int i = 0; i < 10; i++){
                data[i] = rhs.data[i];
            }
        }
        // copy assignment operator
        // objects is already constructed and making copy later
        Array& operator=(const Array& rhs){
            std::cout << "Copy Assignment Operator" << std::endl;
            if(&rhs == this){
                return *this;
            } 
            delete[] data;
            data = new int[10];
            for(int i = 0; i < 10; i++){
                data[i] = rhs.data[i];
            }
            return *this;

        }

        // print
        void PrintData(){
            for (int i = 0; i < 10; i++)
            {
                std::cout << data[i] << std::endl;
            }
        }
        // set
        void SetData(int index, int value){
            data[index] = value;
        }
    private:
        int* data;
};

int main(){

    // Intitialize all of our data up front
    Array myArray;

    myArray.SetData(0, 100);
    myArray.SetData(1, 11);
    myArray.SetData(2, 44);
    myArray.PrintData();
    std::cout << std::endl; // just to insert a break line

    Array myArray2 = myArray; // basically myArray2.data = myArray.data (pointers)
    myArray2.PrintData();
    std::cout << std::endl;

    Array myArray3;
    myArray3 = myArray2;
    myArray3.PrintData();
    std::cout << std::endl;

    std::cout << &myArray  << std::endl;
    std::cout << &myArray2 << std::endl;
    std::cout << &myArray3 << std::endl;
    std::cout << std::endl;

    return 0;
}


// class Vector3{
//     public:
//         float x,y,z;
// };

// int main(){

//     Vector3 myVector;
//     myVector.x = 1.f;
//     myVector.y = 2.f;
//     myVector.z = 3.f;

//     Vector3 myVector2; // we could use copy constructor, i.e. Vector3 myVector2 = myVector;
//     myVector2 = myVector; // copy assignment operator 

//     std::cout << myVector2.x << ", " 
//               << myVector2.y << ", "
//               << myVector2.z << std::endl;

//     return 0;
// }