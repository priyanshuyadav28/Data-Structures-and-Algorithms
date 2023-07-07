#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm> 

using namespace std;

bool isPossible(vector<long long int> arr, long long int n, long long int m, long  long int mid) {

    long long int woodCollected = 0;
    // int count = 1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > mid)
        {
            long long int diff = arr[i] - mid;
            woodCollected = woodCollected + diff;
        }
        
        
    }
    

    if (woodCollected < m)
    {
        return false;
    }

    return true;

}

long long solve(vector<long long int> arr, long long int n, long long int m) {
    long long int start = 0;
    long long int end = *max_element(arr.begin(), arr.end());
    long long int ans = -1;

    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;

        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else {
           end = mid - 1;
        }
        
    }
    
    return ans;
}


int main() {

    vector<long long int> trees = {20, 15, 10, 17};
    
    long long int n = trees.size();
    long long int m = 7;

    long long int ans = solve(trees, n, m);

    cout << ans;




    return 0; 
}