#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num){
    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
           return false;
        }

        return 1;        
        
    }
    
}

int main() {

    cout << isPrime(13) << endl;


    return 0;
}