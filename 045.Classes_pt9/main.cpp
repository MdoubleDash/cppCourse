// RAII - Resource Acquisition Is Initialization
#include <iostream>

class Collection{
    public:
        Collection(){
            data = new int[10];
        }
        ~Collection(){
            delete[] data;
        }
    int& operator[](std::size_t idx){ 
        return data[idx]; 
        }
    const int& operator[](std::size_t idx) const{ 
        return data[idx]; 
        }

    private:
        int* data;
};
 
int main(){
    Collection myCollection;

    myCollection[0] = 42;
    myCollection[1] = 21;

    std::cout << myCollection[0] << std::endl;

    return 0;
}