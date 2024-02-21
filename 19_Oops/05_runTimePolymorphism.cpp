#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

class Animal {
    public: 

    Animal() {
        cout << "Inside Animal Constructor " << endl; 
    }

     virtual void speak() {
        cout << "Speaking " << endl; 
    }

    ~Animal()
    {
        cout << "Inside Destructure" << endl;
    }
}; 

class Dog : public Animal {
    public: 
    
    // overriding

    // if this function would not be defined here it would always 
    // print the result of speak() function in Animal class from where this Dog class is inheriting it 
    // but since we have explicitly defined the function with the same name here also it will override the speak function of Animal class at runtime
    // this is runtime polymorphism. 

    Dog() {
        cout << "Inside Dog constructor" << endl; 
    }

    void speak() {
        cout << "Barking" << endl; 
    }

}; 




int main() {

    // Run Time Polymorphism

    // CASE 1: METHOD only 
    // Animal a; 
    // a.speak(); 

    // printing when speak is defined in Dog class
    // Dog b; 
    // b.speak();

    // printing when speak is NOT defined in Dog class
    // Dog b;
    // b.speak();

    // cases 

    // case 1
    // Animal* a1 = new Animal(); 
    // a1->speak();

    // case 2  
    // Dog* d = new Dog(); 
    // d->speak(); 

    // case 3

    // this is known as upCasting
    // until the speak methon in Animal(parent class) will not be marked as virtual till then only the parent class method spek will be called. 
    // but as soon as we put the virtual keyword there in the parent class at run time the child class's speak will be called
    // Animal* a = new Dog(); 
    // a->speak(); 

    // downCasting 
    // this would throw error or depends compiler to compiler 
    // Dog* b = new Animal(); 
    // b->speak(); 


    //Animal* obj1 = new Animal(); // animal constructor will be called

    Animal* obj2 = new Dog(); // both animal and dog constructor will be called since dog will be depending upon Animal due to the inheritance 






    return 0; 
}