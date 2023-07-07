#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm> 

using namespace std;

bool isPossible(vector<int> arr, int n, int k, long long sol) {
    long long timeSum = 0;
    int count = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > sol)
        {
            return false;
        }

        else if (timeSum + arr[i] > sol)
        {
            count++;
            timeSum = arr[i];

            if (count > k)
            {
                return false;
            }
        }  
        else {
            timeSum += arr[i];
        }
        
    }
    return true;
    
}


int paintersPartition(vector<int> arr, int n, int k) {
    long long start = 0;
    // long long end = accumulate(arr.begin(), arr.end(), 0);
    long long end;

    for (int i = 0; i < n; i++)
    {
        end = end + arr[i];
    }
    
    int ans = -1;

    // if (k > n)
    // {
    //    return -1;
    // }
    
    

    while (start <= end)
    {
        long long mid = start + (end - start) / 2;

        if (isPossible(arr, n, k, mid))
        {
           ans = mid;
           end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        
    }

    return ans;
    
}

int main() {

    vector <int> arr = {10, 20, 30, 40};
    int n = arr.size();
    int k = 2;

    int ans = paintersPartition(arr, n, k);

    cout << ans;


    return 0; 
}