#ifndef INTARRAY_HPP
#define INTARRAY_HPP
#include <string>
// A Vector3 data type, storing floats
class IntArray{
    public:
    //The Big 3
        // 1. Constructor
        IntArray(std::string name);
        // 2. Destructor
        ~IntArray();
        // 3. Copy Constructor Policy
        IntArray(const IntArray& rhs);
        // 3.2. Copy Assignment Operator Policy
        IntArray& operator=(const IntArray& rhs);
    // The other 2 (in total, maing "The Big 5")
        // 4. Move Constructor Policy
        IntArray(IntArray&& source);
        // 5. Move Assignment Operator Policy
        IntArray& operator=(IntArray&& source);
    
    private:
        std::string m_name;
        int* m_data;
};

#endif