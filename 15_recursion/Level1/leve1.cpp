#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

void revCount(int n) {
    if (n == 0)
    {
        return;
    }

    cout << n <<" ";

    revCount(n - 1);
  
}

int factorial(int n) {
    // base case -> tell when to stop 
    if (n <= 2) return n;

    return n * factorial(n - 1);
    
}
 

int fib(int n) {
    // base case 1
    if (n == 1)
    {
        return 0;
    }

    //base case 2
    if (n == 2)
    {
        return 1;
    }

    // recurence relation 
    return fib(n - 1) + fib(n - 2);
    
    
}

// homework 
int powerOfTwo(int exponent) {
    if (exponent == 0)
    {
        return 1;
    }

    return 2 * powerOfTwo(exponent - 1);
    
}

void digits(int n) {
    if (n % 10 == n) {
        cout << n << " ";
        return;
    }


    digits(n / 10);

    cout << n % 10 << " ";

    
}




int main() {
    
    // int n;
    // cout << "Enter the value of n" << endl;
    // cin>> n;


    // revCount(5);
    // cout << "factorial of " << n << " is " <<  factorial(n);

    // cout << fib(n) << endl;


    // MAGICAL LINE : Ek case solve kardo baaki recursion sambhal lega 


    // homeWork

    // question 1:- power of 2 
    // int pow = 3;

    // cout << powerOfTwo(4) << endl;

    // question 2:- print all digit of a number 

    int n =  1287;

    digits(n);



    return 0; 
}