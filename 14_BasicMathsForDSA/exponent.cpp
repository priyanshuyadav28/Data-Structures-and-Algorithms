#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

int slowExponentiation(int a, int b) {
    int ans = 1 ;

    for (int i = 0; i < b; i++)
    {
        ans *= a;
    }
    
    return ans;
}


int fastExponentiation(int a, int b) {

    int ans = 1;

    while (b > 0)
    {
        // odd 
        if (b & 1)
        {   
            ans = ans * a;
        }
        a =  a * a;
        b >> 1;  // b = b / 2;
        
    }
    
    return ans; 

}



int main() {

    // to find power of a number a^b


    // NORMAL METHOD / SLOW EXPONENTIATION
    cout << slowExponentiation(5, 4) << endl; // O(b)

    // FAST EXPONENTIATION


    return 0; 
}