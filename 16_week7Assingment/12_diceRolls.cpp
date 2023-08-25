#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

int numRollsToTarget(int n, int k, int target) {
    // base case 
    if (target < 0) return 0;
    if (n == 0 && target == 0) return 1;
    if (n == 0 && target != 0) return 0;
    if (n != 0 && target == 0) return 0;

    // solve one case baaki recursion sambhal lega 
    int ans = 0;
    for (int i = 1; i <= k; i++)
    {
        ans = ans + numRollsToTarget(n - 1, k, target - k); 
    }

    return ans;
    
}


int main() {

    


    return 0; 
}