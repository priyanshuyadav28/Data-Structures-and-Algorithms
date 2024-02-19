#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

void util(int* p) {

  // p = p + 1;
  *p = *p + 1;

}

void solve(int** ptr) {
  // ptr = ptr + 1;
  **ptr = **(ptr) + 1;
}


int main() {

    // DOUBLE POINTER
    //  int a = 5;
    //  int* p = &a;

    //  int** q = &p;  

    //   cout << "The value of a is " <<  a << endl; 
    //   cout << "The value of &a is " <<  &a << endl; 

    //   cout << endl;

    //   cout << "The value of p is " <<  p << endl; 
    //   cout << "The value of &p is " <<  &p << endl;
    //   cout << "The value of *p is " << *p << endl;

    //   cout << endl;

    //   cout << "The value of q is " << q << endl; 
    //   cout << "The value of &q is " << &q << endl; 
    //   cout << "The value of *q is " << *q << endl; 
    //   cout << "The value of **q is " << **q << endl; 
        
         int a = 5;
         int* p = &a;

         cout << "before " << endl;
         cout << a << endl;
         cout << p << endl;
         cout << *p << endl;

         util(p);
        
         cout << "after " << endl;

         cout << a << endl;
         cout << p << endl;
         cout << *p << endl;

         int**q =  &p;

         cout << "Calling function solve and passing q " << endl;

         solve(q);

         cout << a << endl;
         cout << &a << endl;
         cout << p << endl;
         cout << &p << endl;
         cout << *p << endl;


         



    return 0; 

}