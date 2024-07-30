#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

int coinChange(vector<int>& coins, int amount, vector<int>& dp) {
    // base case 
    if (amount == 0) {
        return 0; 
    }
    if (amount < 0) {
        return INT32_MAX; 
    }

    if (dp[amount] != -1)
    {
        return dp[amount];
    }

    int mini = INT32_MAX; 

    for(int i = 0; i < coins.size(); i++) {
        int ans = coinChange(coins, amount - coins[i], dp); 
        
        if (ans != INT32_MAX) {
            mini = min(ans + 1, mini); 
        }
    }
    dp[amount] = mini; 
    return dp[amount]; 
}

int coinChangeTabulation(vector<int>& coins, int amount) {
    vector<int> dp (amount + 1, INT32_MAX); 

    dp[0] = 0; 

    for(int target = 1; target <= amount; target++) {
        int mini = INT32_MAX; 
        for(int coin = 0; coin = coins.size(); coin++) {
            if (target - coins[coin] >= 0) {
                int ans = dp[target - coins[coin]];
                if (ans != INT32_MAX)
                {
                    mini = min(ans + 1, mini);
                }
            }
        }
        dp[target] = mini; 
    }
    return dp[amount]; 
}

int main() {

    vector<int> coins = {1, 2, 5}; 

    int amount = 11; 

    vector<int> dp(amount + 1, -1); 

    int ans = coinChange(coins, amount, dp); 
    
    cout << "Min coins to create " << amount << " is " << ans << endl; 



    return 0; 
}