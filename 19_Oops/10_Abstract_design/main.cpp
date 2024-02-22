#include <iostream>
#include "bird.h"

using namespace std;

void birdDoesSomething(Bird*&bird) {
    bird->eat(); 
    bird-> fly(); 
    bird->eat();     
}


int main() {

    Bird *bird = new Sparrow(); 
    birdDoesSomething(bird); 

    return 0; 
}