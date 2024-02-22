#if !defined(BIRD_H)
#define BIRD_H

#include <iostream>

class Bird {
    public: 
    virtual void eat() = 0; // pure virtual function -> interface
    virtual void fly() = 0; 
    // classes that inherits this class 
    // has to implement pure virtual functions
}; 


class Sparrow:public Bird {
    private: 
    void eat() {
        std::cout << "Sparrow is Eating \n"; 
    }

    void fly() {
        std::cout << "Sparrow is flying \n"; 
    }
}; 

class Eagle : public Bird {
    public: 
    void eat() {
        std::cout << "Eagle is Eating \n";
    }

    void fly() {
        std::cout << "Eagle is flying \n";
    }
}; 

#endif // BIRD_H
