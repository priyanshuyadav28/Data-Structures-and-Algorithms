#include <iostream>
#include <vector>
#include <algorithm>
#include<set>

using namespace std;
// method 1 = > nested loop O(n2)

// methdo 2 => two pointer method O(n) 
int findPairs(vector<int> nums, int k)
{

    sort(nums.begin(), nums.end());

    int i = 0;
    int j = 1;
    // int count = 0;

    set<pair<int, int>> ans;

    while (j < nums.size())
    {
        int diff = nums[j] - nums[i];

        if (i == j) {
            j++;
        }
        
        else if (diff == k)
        {
            ans.insert({nums[i], nums[j]});
            ++i;
            ++j;
        }

        else if (diff > k)
        {
            i++;
        }

        else // if(diff < k)
        {            
            j++;
        }
       
    }

     return ans.size();

}

// method 3 

int binarySearch(vector<int> &nums, int start, int x) {
    
    int end = nums.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (nums[mid] == x)
        {
            return mid;
        } 
        else if(x > nums[mid]) {
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }
        
    }
    
    return -1;

}

int findPairBs(vector<int> nums, int k) {
    // sort the array first
    sort(nums.begin(), nums.end());
    
    // set to store ans uniquely and not repetedly
    set<pair<int, int>> ans;

    // apply binary search
    int start = 0;
    int end = nums.size();

    for(int i = 0; i < nums.size(); i++) {
        // arr[i]
        // search -> a[i] + k[right subarray]
        if (binarySearch(nums, i + 1, nums[i] + k) != -1)
        {
            ans.insert({nums[i] , nums[i] + nums[k]});
        }
        
    }
    ans.size();
    

}

int main()
{

    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 1;

    int ans = findPairs(nums, k);
    cout << ans;

    return 0;
}