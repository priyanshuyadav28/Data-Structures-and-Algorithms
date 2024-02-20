#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

class Animal {
    public: 
    int age; 
    int weight; 
    string breed;  

}; 

class Dog : public Animal {
    public: 
    string name; 
    string ownerName; 

    void setAge() {
        this->age = 32;  // when inherited in private -> public, private -> protected or private -> private mode in any of the three ways it will not be inherited and show error as inaccissible. 
    }

    void printAge() {
        cout << "This age is " << this->age << endl; 
    }

    void setDogData(int age, int weight, string breed, string name)
    {
        this->age = age; 
        this->weight = weight;
        this->breed = breed;
        this->name = name;
    }

    void getDogData() {
        cout << "Age is " << this->age << endl; 
        cout << "wight is" << this->weight << endl;
        cout << "breed is " << this->breed << endl;
        cout << "Name is " << this->name << endl; 
    }

}; 




int main() {

    // Four Pillars of OOPs 
    /*  1. Encapsulation : 
            wrapping up all the data members and member function in one entity i.e class. 
            used in Data Hiding, achived via access modifiers and class
            -> Perfect Encapsulation: when all the data members are marked as private then we can say perfect encapsulation is achived.


        2. Inheritance 


        3. Polymorphism 


        4. Abstraction  
   */




    Dog* d1 = new Dog(); 
    // mode of inheritance = public -> public
    // d1->setDogData(8, 50, "Labrador", "Leo"); 
    // d1->getDogData();

    // d1->age = 21; 
    // cout << d1->age;

    // mode of inheritance = public -> private
   // d1->age = 33; // throws error inaccessible

    // mode of inheritance = public -> protected
    // d1->age = 32; // again throws error as inaccesible 
    d1->setAge(); 
    d1->printAge(); 



    return 0; 
}