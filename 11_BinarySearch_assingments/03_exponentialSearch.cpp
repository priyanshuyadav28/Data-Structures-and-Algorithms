#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;


int binarySearch(vector<int> arr, int start, int end, int target) { // log(n)

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target == arr[mid])
        {
             return mid;
        }

        else if (target > arr[mid])
        {
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }
         
    }
    return -1;
}


int exponentialSearch(vector<int> arr, int target) { // log(m)

    int start = 1; // startInd 
    int n = arr.size() - 1;

    // if element is found at first index we will return the index 
    // this is done because start is pointing initially at index 1 because we 
    // cannot assgin start to 0 as line no. 47 will alwyas computed as 0
    if (arr[0] ==  target) 
    {
        return 0;
    }

    while (start < n && arr[start] <= target) // start < n as by multiplying by 2 Index can be out of bound from the array
    {
        start = start * 2; // i *= // i = i << 1;
    }
     
    return binarySearch(arr, start / 2, min(start, n), target);
}  

int main() {

       vector<int> arr = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
       
       int target = 70;
       int ans = exponentialSearch(arr, target);

       cout << ans << endl;
    

    return 0; 
}