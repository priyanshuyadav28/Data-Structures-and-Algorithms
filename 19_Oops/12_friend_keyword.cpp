#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

class A {
    private: 
    int x; 

    public: 
    A (int _val) : x(_val){};


    int getX() const {
        return x; 
    }

    void setX(int _val) {x = _val;} 

    friend class B; 
    friend void print(const A &a); 
}; 

class B {
    public: 
    void print(const A &a) {
        // cout << a.getX() << endl; works fine till here 
        
        // when we try this we get error 
        cout << a.x << endl;  // since x is private and it is inaccessible
        // to make this work we need make class A and B friend
        // not after line no. 24 it will work fine 
    }   
}; 

// friend function 
void print(const A &a) {
    cout << a.x << endl; // throws error until void print() is declared as friend of class A
}


int main() {

    A a(5); 
    B b; 
    b.print(a); 

    print(a); 

    return 0; 
}