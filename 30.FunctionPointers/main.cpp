#include <iostream>
#include <functional>

// defining function pointer type
typedef int(*PFnIntegerOperations)(int, int);

int add(int x, int y){
    return x+y;
}

int multiply(int x, int y){
    return x*y;
}

//using namespace std;
 
int main(){
    //-->function pointer: int name(int,int)
    //int (*op)(int, int);
    //PFnIntegerOperations op;
    std::function<int(int,int)> op;

    std::cout <<"1 for add or 2 for mulitply" << std::endl;
    int n;
    std::cin >> n;
    if(n==1){
        op = add;
    } else if(n==2){
        op = multiply;
    }

    int x;
    int y;
    std::cin >> x;
    std::cin >>y;
    
    std::cout << "Operation: " << op(x,y) <<std::endl;
    

    return 0;
}