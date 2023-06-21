#include <iostream>
#include <vector>
using namespace std;

// TOPIC = Binary Search 

// Binary Search condition = array must be sorted
/* Linear search algorithm takes O(n) time complexity for example for an array of size 1000 the number of iteration will be 1000 and time complexity will also be 1000
where as in binary search the time complexity is O(log n) so for an array of 1000 size the time taken to execute the alogrithm will be O(log 1000) which is only 10 hence it is an optimised searching algorithm*/

// Monotonic array = ascending or descending array 

// question 1 
int binarySearch(vector<int> arr, int target) {

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        else if (target > arr[mid])
        {
            start = mid + 1;
        }

        else { // (target < arr[mid])
            end = mid - 1;
        }
        
    }

    return -1;
    
}

// question 2
int firstOccourenceOfElement(vector<int> arr, int target) {

    int start = 0;
    int end = arr.size() - 1;

    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target == arr[mid])
        {    
            ans = mid; // storing answer
            end = mid - 1;   // reducing array
        }

        if (target > arr[mid])
        {
           start = mid + 1;
        }
        
        else {
            end = mid - 1;
        }
       
    }
    return ans;
}

// question 3 
int lastOccourenceOfElement(vector<int> arr, int target) {

    int start = 0;
    int end = arr.size() - 1;

    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {    
            ans = mid; // storing answer
            start = mid + 1;   // reducing array
        }

        if (target < arr[mid])
        {
           end = mid - 1;
        }
        
        else {
            start = mid + 1;
        }
       
    }
    return ans;
}

// question 5

int smallestMissing(vector<int> brr) {
    int start = 0;
    int end = brr.size() - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (brr[mid] != mid + 1)
        {
            ans = mid + 1;
            end = mid - 1;
        }

        else if (brr[mid] == mid + 1)
        {
            start = mid + 1;
        }

    }

    // if (ans == -1) // this case is only if all the elements are present and theres is no missing element and in that case we have to return the last element + 1 th element . 
    // {
    //     ans = brr.size() + 1;
    // }
    
    return ans;
    
}

int main() {
    
    // vector<int> nums = {1, 3, 7, 9, 11, 12, 13, 15, 18, 19};
    
    // int start = 0;
    // int end = nums.size() - 1;
    // int target = 19;

    // int ans = binarySearch(nums, target);
    // cout << ans;


    // question 2
    // vector<int> arr = {1, 4, 4, 4 ,4, 4, 6, 7, 9};
    // int target = 4;

    // int ans1 = firstOccourenceOfElement(arr, target);

    // question 3
    // int ans2 = lastOccourenceOfElement(arr, target);
    // cout << ans2;

    // question 4 
    // int totalOccourence = (ans2 - ans1) + 1; 
    // cout << totalOccourence;

    // question 5 - smallest missing number 
    vector<int> brr = {1, 2, 3, 4, 5, 6, 7, 8};
    int ans = smallestMissing(brr);
    cout << ans;





    return 0;
}