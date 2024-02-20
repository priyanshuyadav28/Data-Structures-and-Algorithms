#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

// expample of single inheritance 
class Car {
    public: 
    string name; 
    int weight; 
    int age; 

    void speedUp() {
        cout << "Speeding Up" << endl; 
    }

    void breakLagao() {
        cout << "Breaks Applied, Slowing Down " << endl; 
    }
    
}; 


class Scorpio : public Car {

}; 



// multilevel Inheritance 
class Fruit {
    public: 
    string name; 
}; 

class Mango : public Fruit {
    public: 
    int weight; 
}; 

class Alphanso : public Mango {
    public: 
    int sweetLevel; 
}; 



// multiple inheritance 
class A {
    public: 
    int chemistry; 

    A() {
        chemistry = 101; 
    }
}; 

class B {
    public:
    int chemistry;

    B() {
        chemistry = 410; 
    }
}; 


class C : public A, public B {
    public:
    string Maths; 
};



// Heirarchical inheritance
class Caar {
    public: 
    int age; 
    int weight;

    void speedUp()
    {
        cout << "Speeding Up" << endl;
    }

    void breakLagao()
    {
        cout << "Breaks Applied, Slowing Down " << endl;
    }


}; 


class Scorpioo : public Caar {

}; 

class Fortuner : public Caar {

}; 


// Hybrid inheritance 





int main() {
    /*
    Types Of Inheritance
        -> single Inheritance : one subclass inherits  one superclass

        -> multilevel Inheritance : single inheritance in a level 

        -> multiple Inheritance: Child inherits mom and dad i.e one subclass inherits multiple super/base class

        -> hierarchical Inheritance : multiple subclass inherits one super/base/parent class. 


        -> hybrid Inheritance: combination of two types of inheritance 
    */

    // crating object of type scorpio

    // single inheritance
    // Scorpio* scorpioN = new Scorpio; 
    // scorpioN->speedUp();  
    // scorpioN->breakLagao();  
    // scorpioN->speedUp(); 


    // multilevel inheritance 

    // Alphanso a; 
    // a.name = "alphanso"; 
    // a.weight = 2; 
    // a.sweetLevel = 9; 

    // cout << a.name << " " << a.weight << " " << a.sweetLevel << endl; 


    // multiple inheritance 

    // C obj; 

    // cout << obj.A::chemistry << " " <<  obj.B::chemistry << endl; 

    // obj.:: here :: is the scope resolution operator 


    // Heirarchical inheritance 

    // Scorpioo s11; 
    // s11.speedUp(); 

    // Fortuner f11; 
    // f11.speedUp(); 





    return 0; 
}