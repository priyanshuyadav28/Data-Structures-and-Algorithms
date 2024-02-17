#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;

int maxSubArraySum(vector<int> &nums, int start, int end)
{
    // base case
    if (start == end)
        return nums[start];

    int maxLeftBorderSum = INT32_MIN;
    int maxRightBorderSum = INT32_MIN;

    int mid = start + (end - start) / 2;

    int maxLeftSum = maxSubArraySum(nums, start, mid);
    int maxRightSum = maxSubArraySum(nums, mid + 1, end);

    int leftBorderSum = 0;

    for (int i = mid; i >= start; i--)
    {
        leftBorderSum += nums[i];
        if (leftBorderSum > maxLeftBorderSum)
        {
            maxLeftBorderSum = leftBorderSum;
        }
    }

    int rightBorderSum = 0;
    for (int i = mid + 1; i <= end; i++)
    {
        rightBorderSum += nums[i];
        if (rightBorderSum > maxRightBorderSum)
        {
            maxRightBorderSum = rightBorderSum;
        }
    }

    int crossBorderSum = maxLeftBorderSum + maxRightBorderSum;

    return max(maxLeftSum, max(maxRightSum, crossBorderSum));
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int start = 0;
    int end = nums.size() - 1;

    int ans = maxSubArraySum(nums, start, end);

    cout << ans << endl;

    return 0;
}