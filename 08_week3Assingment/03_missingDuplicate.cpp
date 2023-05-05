#include<iostream>
#include<vector>

using namespace std;

void missingElement(vector<int> nums) {

    for (int i = 0; i < nums.size(); i++)
    {
        int index = abs(nums[i]);

        if (nums[index - 1] > 0)
        {
            nums[index - 1] *= -1;
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
        {
            cout << i + 1 << " ";
        }
        
    }
}

void missingElement2(vector<int> nums) { // sorting ans swapping method

    int i = 0;
    
    while (i < nums.size())
    {
        int index = nums[i] - 1;

        if (nums[i] != nums[index])
        {
            swap(nums[i], nums[index]);
        }
        else {
            ++i;
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (i + 1 != nums[i])
        {
            cout << i + 1 << " ";
        }
        
    }
     
    

} 

    

int main() {

    vector<int> nums {3, 3, 3, 3, 4};

    // missingElement(nums);
    missingElement2(nums);



    return 0;
}