#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

class A {
    public:
    static int x, y; 

    // void print() {
    //     cout << x << " "<< y << endl; 
    // }
    static void print()
    {
        // no this pointer accessible
        cout << x << " " << y << endl;
    }
}; 

int A:: x; // represents that x is the variable of whole class not of the class instances 
int A:: y; 

int main() {

    // A a = {1, 2}; when we add static before int x, y this throws error 
    // A b = {3, 4};

    // a.print(); 
    // b.print(); 


    A obj1; 
    A obj2; 

    obj1.x = 1; 
    obj1.y = 2; 

    obj1.print(); 

    A::print();

    obj2.x = 4; 
    obj2.y = 5;  

    obj1.print(); 
    obj2.print(); 


    


    return 0; 
}