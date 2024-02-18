#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm>
#include <set> 

using namespace std;

void uniquePermutations(vector<int> &nums, vector<vector<int>>& ans, int i) {
    if (i >= nums.size())
    {
        ans.push_back(nums); 
        return; 
    }

    for(int j = i; j < nums.size(); j++) {
        swap(nums[i], nums[j]); 
        uniquePermutations(nums, ans, i + 1); 
        // backtracking 
        swap(nums[i], nums[j]); 
    }
    
}

int main()
{

    vector<int> nums = {1, 1, 2};
    vector<vector<int>> ans;

    int i = 0;
    
    uniquePermutations(nums, ans, i); 
    // till here it was just a normal permutation
    // now to make it unique, create a set and store the unique only 

    set<vector<int>> st; 

    for(auto e : ans) {
        st.insert(e); 
    }

    ans.clear(); 

    for (auto e : st) {
        ans.push_back(e); 
    }

    for(int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans.size(); j++)
        {
            cout << ans[i][j] << " "; 
        }
        cout << endl; 
        
    }

    return 0;
}