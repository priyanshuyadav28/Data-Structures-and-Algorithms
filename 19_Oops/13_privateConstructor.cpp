#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

class Box{
    private:
    int width;
    Box(int width)
    {
        this->width = width;
    }

    public: 
    // Box(int width) {
    //     this->width = width; 
    // }

    void getWidht() {
        cout << "Width: " << this->width << endl; 
    }

    void setWidth(int _val) {
        this->width = _val; 
    }

    friend class Boxfactory; 
}; 


class Boxfactory {
    private: 
    int count; 

    public: 
    Box getABox(int _w) {
        ++count; 
        return Box(_w); 
    }
}; 

int main() {
    // default case when constructor is public; 
    // Box *b1 = new Box(10); 
    // b1->getWidht(); 

    // when constructor is made private 
    Boxfactory bfact; 
    Box b = bfact.getABox(10); 

    b.getWidht(); 

    return 0; 
}