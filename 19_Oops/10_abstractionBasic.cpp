#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

class A {
    private: 
    int num; 

    public: 
    void setValue(int num) {
        this->num = num; 
    }

    void getValue() {
        cout << this->num << endl; 
    }
}; 


int main() {

    A *obj1 = new A(); 
    obj1->setValue(5); // example of abstraction since data member is private we cannot access it directly but using the setValue function we can set the value 
    obj1->getValue(); 


    return 0; 
}