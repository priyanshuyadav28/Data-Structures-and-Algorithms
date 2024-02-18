#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;

void combinationSum(vector<int> &candidate, int target, vector<vector<int>>& ans, vector<int> temp, int index) {
    if (target == 0)
    {
        ans.push_back(temp); 
        return; 
    }
    if (target < 0) return;

    for (int i = index; i < candidate.size(); i++)
    {
        temp.push_back(candidate[i]);
        combinationSum(candidate, target - candidate[i], ans, temp, i); 
        temp.pop_back(); 
    }
}

int main()
{
    vector<int> candidates = {2, 3, 5};
    int target = 8;

    vector<vector<int>> ans;
    vector<int> temp; 

    combinationSum(candidates, target, ans, temp, 0); 

    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans.size(); j++) {
            cout << ans[i][j] << " "; 
        }
        cout << endl; 
    }


    return 0;
}