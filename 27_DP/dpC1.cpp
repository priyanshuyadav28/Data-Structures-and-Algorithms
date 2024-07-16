#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

// recursive solution of fibonacci series 
int fibRecSolve(int n) {
    // base case 
    if (n == 0 || n == 1)
    {
        return n; 
    }

    int ans = fibRecSolve(n - 1) + fibRecSolve(n - 2);
    return ans; 
}

// adding dp to this solution -> 
// recursion + memoisation 
int topDownSolve(int n, vector<int>& dp) {
    // base case 
    if (n == 0 || n == 1) {
        return n; 
    }

    // step 2 -> mark the current found solution 
    if (dp[n] != -1) {
        return dp[n]; 
    }

    dp[n] = topDownSolve(n - 1, dp) + topDownSolve(n - 2, dp);

    return dp[n]; 
}

int bottomUpSolve(int n) {
    // create dp array 
    vector<int> dp(n + 1, -1); 

    // observe base case in top down solution 
    dp[0] = 0; 
    dp[1] = 1;  

    // step 3: use loop to iterate from starting to n
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 1]; 
    }
    return dp[n]; 
}

int spaceOptSolve(int n) {
    int prev2 = 0; 
    int prev1 = 1; 

    if (n == 0) {
        return prev2; 
    }

    if (n == 1) {
        return prev1; 
    }

    int curr; 
    
    for(int i = 2; i <= n; i++) {
        curr = prev2 + prev1;
        prev2 = prev1;
        prev1 = curr;
    }
}

int main() {

    // int ans = fibRecSolve(7);
    
    // cout << ans << endl; 

    // dp solution 
    // create a dp array 
    int n = 30; 
    vector<int> dp(n + 1, -1); 

    cout << topDownSolve(n, dp); 


    return 0; 
}