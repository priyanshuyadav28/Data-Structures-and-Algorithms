#include <iostream>
#include <vector>

using namespace std;

// question 1 -> pivot element 
int findPivot(vector<int> arr) {
    
    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (mid + 1  < arr.size() && arr[mid] > arr[mid + 1])
        {
            return mid;
        }

        if (mid - 1 >= 0 && arr[mid - 1] > arr[mid])
        {
            return mid - 1;
        }

        if (arr[start] >= arr[mid])
        {
            end = mid - 1;
        }

       else { // arr[start] < arr[mid]
        start = mid;
       } 

    }

    return start;

}

// question 2
int binarySearch(vector<int> nums, int start, int end, int target) {  

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        
        else if (target > nums[mid])
        {
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }
    }
    
    return -1;

}

int findInRotatedArray(vector<int> nums, int target) {
     int ans;

    int pivotIndex = findPivot(nums);

    if (target >= nums[0] && target <= nums[pivotIndex])
    {
        ans = binarySearch(nums, 0, pivotIndex, target);
    }
    else {
        ans = binarySearch(nums, pivotIndex + 1, nums.size() - 1, target);
    }
    
    return ans;
}

// questio 3 - square root of a number using binary Search
int findSqrt(int target) {
    int start = 0;
    int end = target;

    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

       if (mid * mid == target)
       {
        return mid;
       }

       else if (mid * mid > target)
       {
        // ans = mid;
        end = mid - 1;
       }
       else {
        ans = mid;
        start = mid + 1;
       }
       
    }

    return ans;
    
}

// question 4 -> binarySearch 2d array search 

bool binarySearch2d(vector<vector<int> > arr, int rows, int cols, int target) {

    int start = 0;
    int totalSize = rows * cols;
    int end = totalSize - 1; 

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int rowIndex = mid / cols;
        int colIndex = mid % cols; // c * i + j 

        if (arr[rowIndex][colIndex] == target) 
        {
            return true;
        }
        else if (target > arr[rowIndex][colIndex])
        {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return  false;
    
}   






int main() {
    // question 1 -> Pivot element in an array 
    // vector<int> nums = {3, 4, 5, 6, 7, 1, 2};    

    // int ans = findPivot(nums);
    // cout << ans;
    // cout << "Hello" << endl;

    // question 2 - > search and element in a rotated array 

    // vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    // vector<int> nums = {1};
    // int target = 1;

    // int ans = findInRotatedArray(nums, target);

    // cout << ans;

    // question 3 - square root using binary Search 
    // int target = 10;
    // int ans = findSqrt(target);
    
    // // cout << ans;

    // int precision = 5;

    // double step = 0.1;
    // double finalAns = ans; 

    // for (int i = 0; i < precision; i++)
    // {
    //     for (double j = finalAns; j * j <= target; j = j + step)
    //     {
    //         finalAns = j;
    //     }
        
    //     step = step / 10;
    // }
    
    // cout << finalAns;

// question 4
vector<vector<int> > arr = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15, 16},
    {17, 18, 19, 20}
};

int rows = arr.size();
int cols = arr[0].size();

int target = 19;

bool ans = binarySearch2d(arr, rows, cols, target);

cout << ans;







    return 0;
}