#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;

int factorial(int n)
{
    if (n == 1)
        return n;

    return n * factorial(n - 1);
}

void printCount(int n) {
    if (n == 0)
    {
        return;
    }

    cout << n << " ";
    printCount(n - 1);
    
}

int fibonacci(int num) {
    if (num < 2)
    {
        return num;
    }

    return fibonacci(num - 1) + fibonacci(num - 2); 
    
}

int main()
{

    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;

    // int ans = factorial(n);
    // cout << ans << endl;

    // printCount(5);

    int fib = fibonacci(n);
    cout << fib;


    return 0;
}