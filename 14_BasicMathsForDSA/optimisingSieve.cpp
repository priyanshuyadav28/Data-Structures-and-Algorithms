#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

// normal sieve method to count number of prime numbers till an value
vector<bool> optimisedSieve(int n) {
    // if (n == 0) return 0;

    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;

    for (int i = 2; i * i <= n; i++) // optimization 2:
    //  by replacing n by sqrt(n) or i * i <= 
    {
        if (prime[i])
        {
            // int j = 2 * i;
            int j = i * i; // Optimization 1:
                            // firts unmarked number would be 
// i * i, as others have been marked by 2 to (i - 1)  

            while (j < n)
            {
                prime[j] = false;
                j += i;
            }
            
        }
        
    }

    return prime;
    
}


// optimised method of sieve




int main() {

    vector<bool> sieve = optimisedSieve(25);

    for (int i = 0; i <= 25; i++)
    {
        if (sieve[i])
        {
            cout << i << " "; 
        }
        
    }
    



    return 0; 
}