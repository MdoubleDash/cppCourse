#include <iostream>
#include <memory> // weak_ptr (a smart pointer but is not reference counted; holds a non-owning reference)
// safer way to have dangling pointers
// a way to "break cycles-loop"


// some user defined type
class UDT{
    public:
    // Constructor (on creation)
    UDT() { std::cout << "UDT created" << std::endl;}
    // Destructor (on destruction)
    ~UDT() {std::cout << "UDT destroyed" << std::endl;}
};

int main(){

    std::weak_ptr<UDT> ptr2;
    std::cout << "use count = " << ptr2.use_count() << std::endl;
    {
        std::shared_ptr<UDT> ptr1 = std::make_shared<UDT>();        
        {
            ptr2 = ptr1;
            std::cout << "use count = " << ptr1.use_count() << std::endl;
        }
        
    std::cout << "use count = " << ptr1.use_count() << std::endl;
    }

    std::cout << "Is weka_ptr (object that it points to) expired: " << ptr2.expired() << std::endl;
    
    return 0;
}
