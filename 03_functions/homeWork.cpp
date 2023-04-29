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

bool evenOrOdd2(int num) {
    if ((num & 1) == 0)
    {
        return true;
    }

    else {
        return false;
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

int reverseInt(int n) {
    // input = 652
    // output = 256 
    int rev = 0;
    int i = 0;

    bool isNeg = false;
    
    if (n <= INT32_MIN)
    {
        return 0;
    }
    

    if (n < 0)
    {
        /* code */
        isNeg = true;
        n = -n;
    }
    

    while (n > 0)
    {
        if (n > INT32_MAX / 10)
        {
            return 0;
        }
        
        int rem = n % 10;
        rev = rev * 10 + rem;
        // n = n << 1;  
        n = n / 10;   
    }

    if (isNeg == true)
    {
        /* code */
        return -rev;
    }
    return rev;
    
}

int setKthBit(int n, int k) {

    int mask = 1 << k;

    int ans = n | mask;

    return ans;

}

double convertTemperature(float celciusTemp) {
    // celcius to kelvin and farhenite
    double kelvin = celciusTemp + 273.15;
    double farhenite = celciusTemp * (1.80 + 32.00);
 
    float ans[] = {kelvin, farhenite};
    
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

    // cout << "Enter the number : " << endl;
    // cin >> num;
    // getPrime(num);
    // cout << evenOrOdd2(num) << endl;
    // cout << reverseInt(num) <<endl;
    cout << setKthBit(10, 2) <<endl;















    return 0;
}