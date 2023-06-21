#include<iostream>
#include<vector>

using namespace std;

void missingElement(vector<int> nums) {
    
    int ans = -1;

     for (int i = 0; i < nums.size(); i++)
     {
        int index = abs(nums[i]);

        if (nums[index - 1] > 0)
        {

        nums[index - 1] *= -1;

        }
        
     }

    // all positive indexes are missing 

     for (int i = 0; i < nums.size(); i++)
     {
        if (nums[i] > 0)
        {
            cout << i + 1 << " " ;
        }
        
     }
}


int main() {

    vector<int> nums = {1, 3, 7, 3, 4};
    
    missingElement(nums);


    return 0;
}