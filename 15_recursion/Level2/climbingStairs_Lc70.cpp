#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

int countClimbStairs(int n) {
    // base condition 
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return countClimbStairs(n - 1) + countClimbStairs(n - 2);
    
}

int main() {

    int n = 4;
    cout << countClimbStairs(n) << endl;


    return 0; 
}