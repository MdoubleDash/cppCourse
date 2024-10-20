#include <iostream>
#include <memory> // unique_ptr (a smart pointer)
// we cannot share (no copies are allowed)
// we don't need to delete (block scope)


// some user defined type
class UDT{
    public:
    // Constructor (on creation)
    UDT() { std::cout << "UDT created" << std::endl;}
    // Destructor (on destruction)
    ~UDT() {std::cout << "UDT destroyed" << std::endl;}
};

int main(){

    //UDT mike;
    // this is scoped, does not need us to call "delete mike"
    std::unique_ptr<UDT> mike = std::unique_ptr<UDT>(new UDT);
    //std::unique_ptr<UDT> john = mike; // not CopyConstructable not CopyAssignable; move is allowed
    std::unique_ptr<UDT> john = std::move(mike); // transfer ownership

    //std::unique_ptr<UDT[]> mikeArray = std::unique_ptr<UDT[]>(new UDT[10]);
    // equivalent to the line above ^^^
    //std::unique_ptr<UDT[]> mikeArray = std::make_unique<UDT[]>(10);

    return 0;
}

/*
int main(){

    int* array = new int[100];
    for (int i = 0; i < 100; i++)
    {
        array[i] = i + 1;
    }
    
    int* ptr = array;

    std::cout << "*ptr = " << *ptr << std::endl;

    delete[] array;

    float* newarray = new float[500];

    // owenership
    int* ptr2 = ptr;

    std::cout << "*ptr2 = " << *ptr2 << std::endl;

    //delete[] array;
    delete[] newarray;

    return 0;
}
*/