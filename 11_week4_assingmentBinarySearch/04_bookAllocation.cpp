#include <iostream>
#include <vector>
#include <algorithm> 
#include <numeric>

using namespace std;

bool isPossibleSolution(vector<int> nums, int n, int m, int sol) {
    int pageSum = 0;
    int counter = 1; // to maintain the count of total student 

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > sol)
        {
            return false;
        }
        
        if (pageSum + nums[i] > sol )
        {
            counter++;
            pageSum = nums[i];

            if (counter > m)
            {
                return false;
            }
            
        } else {
            pageSum = nums[i];
        }
        
    }
    return true;
    
}

int bookAllocation(vector<int> nums, int n, int m) {

    // students are more than the books then all students cannot be assigned with books 
    if (m > n) 
    {
        return -1;
    }    
    
    // finding the total sum of the array to keep as the end

    // int totalRange = 0; // 203
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     totalRange += nums[i];
    // }  

    // can also be calculated via accumulate() functoin of stl
    int start = 0;
    int end = accumulate(nums.begin(),nums.end(), 0);
    int ans = -1;
    

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        
        if (isPossibleSolution(nums, n, m, mid))
        {   
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    
    
    return ans;
}

int main() {

    vector<int> nums =  {12, 34, 67, 90};
    int m = 2;
    int n = nums.size();

    int ans = bookAllocation(nums, n, m);
    cout << ans;



    return 0; 
}