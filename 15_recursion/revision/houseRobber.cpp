#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

void houseRobberMaxProfit(vector<int> arr, int i, int sum,  int& maxi) {
    // base case 
    if (i >= arr.size())
    {
        maxi = max(sum, maxi); 
        return; 
    }

    // include
    houseRobberMaxProfit(arr, i + 2, sum + arr[i], maxi); 

    // exclude 
    houseRobberMaxProfit(arr, i + 1, sum, maxi); 
    
} 

int rob(vector<int> nums) {

}

int main() {

    vector<int> arr = {2, 1, 4, 9}; 
    // int maxProfit = INT32_MIN; 
    // int i = 0; 

    // houseRobberMaxProfit(arr, i, 0, maxProfit); 

    // cout << maxProfit; 

    


    return 0; 
}