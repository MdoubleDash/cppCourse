#include <iostream>
#include "Vector3f.hpp"

// operator overload - see previous lessons
std::ostream& operator<<(std::ostream& os, const Vector3f& obj){
    os << obj.x << ", " << 
          obj.y << ", " <<
          obj.z;
    return os;
}

int main(){

    Vector3f myVector1;
    
    std::cout << myVector1 << std::endl;
    
    return 0;
}