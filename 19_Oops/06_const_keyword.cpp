#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;


class Abc {
    int x; 
    int *y; 

    public: 
    Abc() {
        x = 0; 
        y = new int(0); 
    }

    int getX() const
    {
       //  x = 50; // erorr 
        return x;
    }

    void setX(int _val) {
        x = _val; 
    }

    int getY() {
        return *y; 
    }

    void setY(int _val) {
        *y = _val; 
    }

}; 

int main() {

    // const int x = 5; // x is a constant
    // intitialization can be done 
    // but we cant reinitialized
    // x = 10; // throws errors as x is defined const and cannot be changed

    // cout << x << endl; 

    // 2. const with pointers 
    
    // const int *a = new int(2); // CONST data, NON-CONST pointer
    // int const *a = new int(2); // same as line 23 
    // // *a = 2; // cant change the content of pointer since value at addres is const     
    // //cout << *a << endl;  

    // // reasigning pointer a 
    // int b = 20; 
    // a = &b;  // pointer itself can be reassigned 

    // cout << *a << endl; 

    

    // CONST Pointer but NON-CONST data 
    // int *const a = new int(2); 
    // *a = 20; // chal jaayega,  becuase data is not const so it can be reinitialized

    // int b = 50; 
    // // a = &b; // nahi chalega,becuase pointer is const and cannot be reinitialized 

    // cout << *a << endl; 


    // CONST pointer CONST data 
    // const int *const a = new int(22); 
    // //*a = 10; // error since data is CONST
    // int b = 100; 
    // //a = &b; // error since pointer is CONST 
    // cout << * a << endl; 


    // const in functions 
    Abc a; 
    cout << a.getX() << endl; 
    cout << a.getY() << endl; 
    


    return 0; 
}