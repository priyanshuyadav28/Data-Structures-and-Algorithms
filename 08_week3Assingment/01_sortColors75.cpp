#include <iostream>
#include <vector>

using namespace std;

void printArray(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

void sortColors(vector<int> nums)
{
    int start = 0;
    int end = nums.size() - 1;

    int low = 0;
    int med = 0;
    int high = nums.size() - 1;

    while (med < high)
    {
        if (nums[med] == 0)
        {
           swap(nums[low], nums[med]);
           low++;
           med++;
        }
        
        else if (nums[med] == 1)
        {
           med++;
        }

        else { // if(num[m] == 2)
        swap(nums[med], nums[high]);
        end--;
        }
        
    }

    for (int i = 0; i < nums.size(); i++)
    {
       cout << nums[i] << " ";
    }
    
}


int main()
{
    vector<int> nums {2, 0, 2, 1, 1, 0};

    sortColors(nums);
    // cout << "hello World" << endl;

    return 0;
}