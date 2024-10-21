#ifndef VECTOR3F_HPP
#define VECTOR3F_HPP
// A Vector3 data type, storing floats
struct Vector3f{
    Vector3f();

    float x, y, z; // this is the order in memory
};

// basically struct is public and class is private by default
/*
class Vector3f{
    public:

    Vector3f();

    float x, y, z; // this is the order in memory
};
*/
#endif