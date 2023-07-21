#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

bool isPrime(int n)
{

    if (n <= 2)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}


int countPrime(int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {

        if (isPrime(i))
        {
            count++;
        }
    }

    return count;
}


// sieve of eratosthenes
int primeCount(int n) {
    
    if (n == 0)
    {
        return 0;
    }

    vector<bool> prime(n, true); // all are marked prime alredy

    prime[0] = prime[1] = false;

    int ans = 0;

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            ans++;

            int j = 2 * i;

            while (j < n)
            {
                prime[j] = false;
                j += i;
            }
            
            
        }
        
    }

    return ans;
    
    
}

int main()
{

    // cout << isPrime(4) << endl;
    // cout << countPrime(10) << endl;

    return 0;
}