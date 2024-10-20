#include <iostream>

 int* AllocateMemory(){
     return new int;
 }

// this allows us to allocate resources at runtime
// that resources is returned to us in a pointer
int main(){

    int* x = AllocateMemory();
    delete x;

    int* y = new int;
    delete y;

    int NumberOfStudents=0;

    std::cout << "How many students in our class?" << std::endl;
    std::cin >> NumberOfStudents;

    int* studentids = new int[NumberOfStudents];

    for (int i = 0; i < NumberOfStudents; i++)
    {
        studentids[i] = i;
    }
    std::cout << studentids[2] << std::endl;

    delete[] studentids;   
    
    return 0;   
}