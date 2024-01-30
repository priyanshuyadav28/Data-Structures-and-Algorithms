#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

int main() {

    // int a = 5;
    // int b = 5;

    // cout << &a << endl;  // (&)-> Address of operator, this will give the address of a in memory 
    // cout << &b << endl;



    // now what is a pointer ? 
    // int a = 5;
    // creating pointer, 
    // pointer stores address
    // int* ptr = &a;

    // int -> data type
    // * -> part of syntax or dereference operator 
    // &a -> address of a 
    // int* -> is a pointer to integer data OR ptr is a pointer which contain integer data

    // access the value ptr is pointing to 
    // ptr is pointing to address of a so cout << ptr; will give the address of a 
    //cout << ptr << endl;

    // now to print the value we have to dereference ptr
    //cout << *ptr << endl; // this will print 5 or the value stored in ptr
    // here *ptr means value at location stored in ptr

    // pointer in c++ is a variable which stores address of other variables 

    // another example 
    // char ch = 'p';

    // char* cptr = &ch;

    // cout << "Address of ch is " << &ch << endl;
    // cout << "value stored at cptr is " << cptr << endl;
    // cout << "value cptr is pointing to is " << *cptr << endl;
    // cout << "address of cptr is " << &cptr << endl;

    
    // size of a pointer 

    // int a = 5;
    // int* p = &a;

    // cout << sizeof(p) << endl;

    // char ch = 'b';
    // char* c = &ch;

    // cout << sizeof(c) << endl;

    // double dtr = 5.03;
    // double* d = &dtr;

    // cout << sizeof(d) << endl;

    // The size of all the pointer variables p, c and d will be same because they are storing the address of a variable and memory address of all the vaiable in size will be equal since the value is same ex. hexadecimal 

    // BAD PRACTICE 
    // int* ptr;
    
    // cout << ptr << endl;

    // creating a NULL POINTER
    // int* ptr = 0;  

    // int* ptr = nullptr;
    // cout << *ptr << endl;

    // int a = 5;

    // int* ptr = &a;

    // copy pointer 
    // int* dusraPtr = ptr;

    // cout << *ptr << endl;
    // cout << *dusraPtr / 2 << endl;
    // cout << *dusraPtr << endl;


    int a = 10;
    int* p = &a;
    int* q = p;
    int* r = q;

    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;
    cout << q << endl;
    cout << &q << endl;
    cout << *q << endl;
    cout << r << endl;
    cout << &r << endl;
    cout << (*p + *q + *r) << endl;
    cout << (*p)*2 + (*r)*3 << endl;
    cout << (*p / 2) - (*q) / 2 << endl;








    return 0; 
}