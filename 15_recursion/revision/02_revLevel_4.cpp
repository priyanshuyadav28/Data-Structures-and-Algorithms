#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 


using namespace std;

int minNumOfElement(vector<int>& arr, int target) {
    if (target == 0)
    {
        return 0; 
    }

    if (target < 0)
    {
        return INT32_MAX; 
    }

    int mini = INT32_MAX; 

    for (int i = 0; i < arr.size(); i++)
    {        
        int ans = minNumOfElement(arr, target - arr[i]);

        if (ans != INT32_MAX)
        {
            mini = min(mini, ans + 1);
        }
    }

    return mini;
}


int maxRodSegment(int n, int x, int y, int z) {
    if (n == 0)
    {
        return 0; 
    }
    
    if (n < 0)
    {
        return INT32_MIN; 
    }

    int ans1 = maxRodSegment(n - x, x, y, z) + 1; 
    int ans2 = maxRodSegment(n - y, x, y, z) + 1; 
    int ans3 = maxRodSegment(n - z, x, y, z) + 1;  

    int ans = max(ans1,  max(ans2, ans3));

    return ans; 

}

void solve(vector<int>& arr, int i, int sum, int& maxi)
{
    if (i >= arr.size())
    {
        maxi = max(sum, maxi); 
        return; 
    }

    solve(arr, i + 2, sum + arr[i], maxi); 

    solve(arr, i + 1, sum, maxi); 
    
}



int main() {
    
    // vector<int> arr = {1, 2, 3}; 
    // int target = 11;

    // int solve = minNumOfElement(arr, target); 
    // cout << solve << endl; 

    // int n = 7; 
    // int x = 5; 
    // int y = 2; 
    // int z = 2;

    // int solve = maxRodSegment(n, x, y, z);

    // if (solve < 0) // < 0 means its INT_MIN or less than that then in that case no solution exist so return 0 
    // {
    //     solve = 0; 
    // }

    // cout << solve << endl;

    vector<int> arr = {2, 1, 4, 9};
    int i = 0; 
    int sum = 0; 
    int maxi = INT32_MIN;  

    solve (arr, i , sum, maxi); 
    cout << maxi << endl;



    


    return 0; 
}