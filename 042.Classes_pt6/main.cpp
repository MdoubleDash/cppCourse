#include <iostream>

// A Vector3 data type, storing floats
class Vector3f{
    public:
    Vector3f(){
        x = 0.f;
        y = 0.f;
        z = 0.f;
    }
    
    Vector3f operator+(const Vector3f& rhs) const {
        Vector3f result;
        result.x = x + rhs.x;
        result.y = y + rhs.y;
        result.z = z + rhs.z;
        return result;
    }

    Vector3f operator++(){
        
        x = x+1;
        y = y+1;
        z = z+1;
        return *this;
    }

    // bool operator==(const Vector3f& rhs) const {
    //     std::cout << "member function" << std::endl;
    //     return (x == rhs.x && y == rhs.y && z == rhs.z);
    //     }


    float x, y, z;
};

std::ostream& operator<<(std::ostream& os, const Vector3f& obj){
    os << obj.x << ", " << 
          obj.y << ", " <<
          obj.z;
    return os;
}

// if we have both, which one will run?
// the free function or the member function? At least in my case, free function!
// In Mike's video, it was the member function
bool operator==(const Vector3f& lhs, const Vector3f& rhs) {
    std::cout << "free function" << std::endl;
    return (lhs.x == rhs.x && lhs.y == rhs.y && lhs.z == rhs.z);
    } // for floats better to do `std::abs(lhs.x = rhs.x) < someThreshold`

 
int main(){

    Vector3f myVector;
    myVector.x = 1.333333333333f;
    myVector.y = 2.131313131313f;
    myVector.z = 3.999999999999f;

    Vector3f myVector2;
    myVector2.x = 1.333333333332f;
    myVector2.y = 2.131313131312f;
    myVector2.z = 3.999999999998f;

    std::cout << (myVector==myVector2) << std::endl;    

    myVector = myVector + myVector2;
    ++myVector;
    ++myVector;
    ++myVector;

    std::cout << myVector << std::endl;
    

    return 0;
}