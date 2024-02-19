#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;

class Animal
{
    // state or properties
    private: 
    int weight; 

    public:
    int age;
    string name;

    // behaviour -> functions

    void eat()
    {
        cout << "Eating " << endl; 
    }

    void sleep()
    {
        cout << "sleeping" << endl; 
    }

    void setWeight(int w) {
        weight = w; 
    }

    void getWeight() {
        cout << weight;  
    }


};

int main()
{
    // object Creation -> creating an instance of a class
    // static allocation
    // Animal ramesh;
    // ramesh.age = 12; 
    // ramesh.name = "Cheeta"; 


    // cout << "Ramesh age " << ramesh.age << endl ; 
    // cout << "Name of Ramesh is " << ramesh.name << endl;
    // ramesh.eat();  

    // fetching private members
    // ramesh.setWeight(86); 
    // ramesh.getWeight(); 


    // Dynamic Memory allocation
    // Animal suresh = new Animal; 

    





    return 0;
}