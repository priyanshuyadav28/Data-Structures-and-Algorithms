#include<iostream>
#include<vector>


using namespace std;

void moveNegativeLeft(vector<int> nums) {
    int l = 0;
    int h = nums.size() - 1;

    while (l <= h)
    {        
        if (nums[l] < 0)
        {
            l++;
        }

        else if (nums[h] > 0)
        {
            h--;
        }

        else //(nums[h] < 0)
        {
            swap(nums[h], nums[l]);
            h--;
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    
    
}


int main() {

    vector<int> nums = {-4, 1, 2, -3, 4, -5, -6};

    moveNegativeLeft(nums);


    return 0;
}