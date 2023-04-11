#include<iostream>
#include<math.h>
using namespace std;

// area of Circle 
int getCircleArea(int radius) {
    return 3.14 * radius * radius;
}

// even or Odd
string evenOrOdd(int num) {

    if (num % 2 == 0)
    {
        return "Even";
    }

    else {
        return "Odd";
    }
    
}

// factorial of a number
int factorial(int num) {
    if (num < 2)
    {
        return 1;
    }
    
    return num * factorial(num - 1);
}

// prime or not 
bool isPrime(int num) {
    
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
        
    }
    return 1;
}

// prime number 1 to n 
void getPrime(int num) {
    for (int i = 2; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " "; 
        }
    }
}

int main() {

    float radius;

    // cout << "Enter the value of Radius :" << endl;
    // cin >> radius;
    // cout << getCircleArea(radius) << endl;

    int num;
    // cout << "Enter the number " << endl;
    // cin >> num;
    // string ans = evenOrOdd(num);
    // cout << ans;

    // cout << "Enter the number : " << endl;
    // cin >> num;
    // cout << "The factorial of " << num << " is " << factorial(num);


    // cout << "Enter the number : " << endl;
    // cin >> num;
    // cout << isPrime(num) << endl;

    cout << "Enter the number : " << endl;
    cin >> num;
    getPrime(num);















    return 0;
}