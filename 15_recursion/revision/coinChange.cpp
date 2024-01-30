#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

int coinChange(vector<int> coins, int target) {
    // base case 
    if (target == 0)
    {
        return 0; 
    }

    if (target < 0)
    {
        return INT32_MAX; 
    }

    int minCoins = INT32_MAX; 
    
    // solve for one case 
    for (int i = 0; i < coins.size(); i++)
    {
        
        int ans = coinChange(coins, target - coins[i]);

        if (ans != INT32_MAX)
        {
            minCoins = min(minCoins, ans + 1);
        }

        
    }
    
    return minCoins; 
    
}

int main() {

    vector<int> coins = {1, 2, 3}; 
    // find the min number of coins required to create target

    int target = 5; 

    cout << coinChange(coins, target) << endl;


    return 0; 
}