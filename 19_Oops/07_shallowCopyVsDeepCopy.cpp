#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;


class Abc {
    public: 
    int x; 
    int *y; 

    Abc(int _x, int _y) : x(_x), y(new int(2)) {}

    // defalut dumb copy constructor : it does SHALLOW COPY 
    Abc(const Abc& obj) {
        this->x = obj.x; 
        this->y = obj.y; 
    }

    // OUR SMART DEEP COPY
    // Abc (const Abc& obj) {
    //     x = obj.x; 
    //     y = new int(*obj.y); // deep copy at new location with same value 
    // }

    void print() const {
        printf("X:%d\nPTR Y:%p\nContent Y(*y):%d\n\n", x, y, *y); 
    }

    ~Abc() {
        delete y; 
    }


}; 


int main() {

    // case 1: pointing at same memory location 
    // Abc a(1, 2); 
    // cout << "Printing a " << endl; 
    // a.print(); 

    // // Abc b(a);
    // Abc b = a; // call karta hai COPY CONSTRUCTOR

    // cout << "Printing b " << endl;
    // b.print();

    // changing the value in b 

    // cout << "Modifying the value of y in b" << endl; 

    // *b.y = 20; 

    // cout << "Printing after modifying" << endl; 

    // b.print(); 

    // cout << "Printing a " << endl;
    // a.print(); 


    // case 2: dangling pointer

    Abc *a = new Abc(1, 3);
    a->print(); 

    Abc b = *a; 
    delete a; 

    b.print(); // this is solved via deep copy 




    return 0; 
}