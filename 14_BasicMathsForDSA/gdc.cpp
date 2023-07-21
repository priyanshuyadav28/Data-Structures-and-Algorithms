#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;


int gcd(int a, int b) {

    if (a == 0)
    {
        return b;
    }

    if (b == 0)
    {
        return a;
    }

    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a - b;
        } else {
            b = b - a;
        }
        
    }
    
    return a == 0 ? b : a;
    
}


int lcm(int a, int b) {

    int hcf = gcd(a, b);
    int product = a * b;
    int ans = product / hcf;

    return ans;
}


int main() {

    cout << gcd(20, 30) << endl;

    // to calculate lcm we know lcm * hcf = a * b
    // so lcm =  a * b / gcd

    cout << lcm(20, 30) << endl;



    return 0; 
}