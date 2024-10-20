#include <iostream>
#include <memory> // shared_ptr (a smart pointer)



// some user defined type
class UDT{
    public:
    // Constructor (on creation)
    UDT() { std::cout << "UDT created" << std::endl;}
    // Destructor (on destruction)
    ~UDT() {std::cout << "UDT destroyed" << std::endl;}
};

int main(){

    std::shared_ptr<UDT> ptr1 = std::make_shared<UDT>();

    {
        std::shared_ptr<UDT> ptr2 = ptr1;
        std::cout << "use count = " << ptr1.use_count() << std::endl;
    } // ptr2 is 'freed' but the resource is still not destroyed
    
    std::cout << "use count = " << ptr1.use_count() << std::endl;

    return 0;
}
