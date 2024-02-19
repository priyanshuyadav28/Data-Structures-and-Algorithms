#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

int main() {

    int a = 5;

    int* ptr = &a;
    int** qtr = &ptr;

    cout << "The value of a is " <<  a << endl;
    cout << "The value of &a is " <<  &a << endl;

    cout << endl;

    cout << "The value of *ptr is " <<  *ptr << endl; // value at address stored in ptr/ a;

    cout << "The value of ptr is " << ptr << endl; // address of a 
    cout << "The value of &ptr is " << &ptr << endl; // address of ptr 

    cout << endl;

    cout << "The value of qtr is " <<  qtr << endl; // address of ptr;
    cout << "The value of *qtr is " <<  *qtr << endl; // value at address stores in qtr, qtr has address of ptr and ptr's value is the address of a 
    
    cout << "The value of &qtr is " <<  &qtr << endl; // qtr's address 

    cout << endl;

    cout << "The value of **qtr is " <<  **qtr << endl;


    return 0; 
}