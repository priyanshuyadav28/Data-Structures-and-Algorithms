#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;

int rob(vector<int> &nums, int i)
{

    if (i >= nums.size())
    {
        return 0; 
    }
    

    int robAmt1 = nums[i] + rob(nums, i + 2);
    int robAmt2 = 0 + rob(nums, i + 1);

    return max(robAmt1, robAmt2);
}

int main() 
{

    vector<int> nums = {1, 3, 1};

    int i = 0;

    cout << rob(nums, i);

    return 0;
}