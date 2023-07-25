#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

vector<bool> Sieve(int n) {

    vector<bool> sieve(n + 1, true); // initially all are true

    sieve[0] = sieve[1] = false; // since 0 and 1 are non prime. 
    int count = 0;

    for (int i = 2; i * i < n; i++) // optimization 2:
    //  by replacing n by sqrt(n) or i * i <= 
    {
        if (sieve[i] == 1)
        {
            // int j = 2 * i;
            int j = i * i;

             while (j < n)
             { 
                sieve[j] = false;
                j += i;
             }
            
        }
        
    }
    
    
    return sieve;
    
}
// l = left 
// r = right
// approach for segmented sieve 
// 1-> Generate all primes responsible to mark seg sieve
// 2-> Use the normal sieve for generating the base sieve
// 3->give the n value in normal sieve as sqrt(r) then the sieve which it will return will help us to mark the primes in the seg_sieve 

vector<bool> segSieve(int l, int r) {
    // get me the requered prime array to mark the other values line-41, 42

    vector<bool> reqPrime = Sieve(sqrt(r));
    

    // storing the primes in reqPrimes into basePrimes since reqPrime will have both 0 and 1 values, we have to separate 1 which means prime
    vector<bool> basePrimes;

    for (int i = 0; i < reqPrime.size(); i++)
    { 
        if (reqPrime[i])
        {
            basePrimes.push_back(i);
        }

    }

    // now we will use these primes to mark our seg_sieve 

    // find first index / multiple to start marking 

    vector<bool> seg_sieve(r - l + 1, true);

    if (l == 1 || l == 0)
    {
        seg_sieve[l] = false;

    }

    for (auto prime : basePrimes) // prime will contain the value at basePrime
    {
        int first_mul = (l / prime) * prime;

        if (first_mul < l)
        {
            first_mul += prime;
        }

        int j = max(first_mul, (prime * prime));

        // now start marking 
        while (j <= r)
        {
            seg_sieve[j - l] = false;
            j += prime;
        }
        
    }
    
    return seg_sieve;

}









int main() {
    
    // vector <bool> ans = Sieve(25);

    // for (int i = 0; i < ans.size() + 1; i++)
    // {
    //     if (ans[i])
    //     {
    //         cout << i << " ";
    //     }
        
    // }

    int l = 110;
    int r = 130;

    vector<bool> ss = segSieve(l, r);

    for (int i = 0; i < ss.size(); i++)
    {
        if (ss[i])
        {
           cout << i + l << " ";
        }
        
    }
    




    return 0; 
}