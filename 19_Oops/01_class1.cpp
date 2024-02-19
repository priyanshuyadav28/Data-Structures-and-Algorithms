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


    // creating constructor
    Animal() {
        cout << "Constructor called " << endl; 
    }

    // behaviour -> functions

    void eat()
    {
        cout << "Eating " << endl; 
    }

    void sleep()
    {
        cout << "sleeping" << endl; 
    }

    void setWeight(int weight) {
        this->weight = weight; // this -> is a pointer to current object
    }

    void getWeight() {
        cout << weight;  
    }


};


class Students {
    private: 
    float cgpa; 

    public: 
    string uid; 
    string name; 
    float sgpa; 


    Students (string uid, string name, float sgpa, float cgpa) {
        this->uid = uid; 
        this->name = name; 
        this->sgpa = sgpa; 
        this->cgpa = cgpa; 
    }


    // copy constructor
    Students(Students& obj)
    {
        cout << "Inside copy constructor..." << endl; 
        this->uid = obj.uid;
        this->name = obj.name; 
        this->sgpa = obj.sgpa; 
        this->cgpa = obj.cgpa;
    }

    void getStudentData() {
        cout << "Uid is " << this->uid << endl; 
        cout << "Name is " << this->name << endl; 
        cout << "sgpa is " << this->sgpa << endl;
        cout << "cgpa is " << this->cgpa << endl;
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
    // Animal* suresh = new Animal;  

    // cout << suresh << endl; // suresh will have the address of the memory 
    // where the space has been provided
    
    // (*suresh).age = 15; // now we cannot use simply suresh.age as suresh holds an address we need to dereference it so we will use (*suresh)

    // suresh->name = "Surya"; // works same as (*suresh).name 

    // cout << suresh->age << endl; 
    // cout << suresh->name << endl; 

    // suresh->setWeight(98); 
    // suresh->getWeight(); 

    // cout << endl; 

    // suresh->eat(); 
    // suresh->sleep(); 




    // new class with constructor
    Students* priyanshu = new Students("21BCS6104", "Priyanshu Yadav", 7.35, 7.83);

    priyanshu->getStudentData();  
    
    Students lalu = *priyanshu;

    return 0;
}