#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

// compile time polymorphism 
    // method overloading
class Maths {
    public: 
    int sum (int a, int b) {
        return a + b; 
    }

    int sum (int a, int b, int c) {
        return a + b + c; 
    }

    int sum(int a, float b)
    {
        return a + b;
    }
}; 

// operator overloading (compile time polymorphism)
class Param {
    public: 
    int val; 


    void operator+(Param& obj2) {
        int value1 = this->val;
        int value2 = obj2.val;

        cout << (value2 - value1) << endl; 
        
    }

}; 




int main() {

    // polymorphism = existing in multiple forms
    // poly = many , morphism = forms 

    // two types 
        // 1. compile time polymorphism 
                // 1.1 function overloading
                // 1.2 operator overloading 

        // 2. run time polymorphism


    // method overloading 
    // Maths obj; 
    // cout << obj.sum(2, 5) << endl; 
    // cout << obj.sum(2, 5, 2) << endl; 
    // cout << obj.sum(2, 5.13f) << endl; 

    // operator overloading 
    Param obj1, obj2;

    obj1.val = 7;
    obj2.val = 2;

    obj1 + obj2; 

    return 0; 
}