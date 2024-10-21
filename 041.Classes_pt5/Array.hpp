#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <vector>
/* 
Rule of Three
If you need to write a constructor or destructor, 
or copy constructor, you probably need to write all three
*/
/*
Law of Big Two
If you're using a built in data structure with built in destructor
you probably only need your custom constructor and copy constructor
*/
class Array{
    public:
        // Special member functions:
        // (1)constructor
        Array(int n = 1);
        // (2) destructor
        ~Array();
        // (3 or 4) copy assignment operator
        // objects is already constructed and making copy later
        Array& operator=(const Array& rhs);
        // (3) copy constructor
        // if want to avoid copies either move to private
        // or add "=delete;" the copy constructor (modern cpp)
        // remember to comment out or remove the implementation
        Array(const Array& rhs)=delete; 
        // print
        void PrintData();
        // set
        void SetData(int index, int value);

        

    private:
        //Array(const Array& rhs);
        std::vector<int> data;
};

#endif