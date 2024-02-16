#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;

int merge(vector<int>& arr, int start, int end) {
    int mid = start + (end - start) / 2; 
    int count = 0; 


    int len1 = mid - start + 1; 
    int len2 = end - mid; 

    int* left = new int[len1]; 
    int* right = new int[len2]; 

    int k = start;  

    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k]; 
        k++; 
    }

    k = mid + 1; 

    for (int i = 0; i < len1; i++)
    {
        right[i] = arr[k]; 
        k++; 
    }

    int leftIndex = 0; 
    int rightIndex = 0; 
    int mainIndex = start; 

    while (leftIndex < len1 && rightIndex < len2)
    {
        if(left[leftIndex] < right[rightIndex]) {
            arr[mainIndex] = left[leftIndex]; 
            mainIndex++; 
            leftIndex++; 
        } else {
            arr[mainIndex] = right[rightIndex]; 
            mainIndex++; 
            rightIndex++; 
            count+= mid - start + 1; 
        }
    }

    while (leftIndex < len1)
    {
        arr[mainIndex] = left[leftIndex];
        mainIndex++;
        leftIndex++;
    }

    while (rightIndex < len2)
    {
        arr[mainIndex] = right[rightIndex];
        mainIndex++;
        rightIndex++;
    }
    
   return count; 
}


int mergeSort(vector<int>& arr, int start, int end, int count) {
    // base case 
    if (start >= end) 
        return count; 

    int mid = start + (end - start) / 2;
    // int count = 0; 

    count += mergeSort(arr, start, mid, count);
    count += mergeSort(arr, mid + 1, end, count); 

    count += merge(arr, start, end); 
}


int main()
{
    vector<int> arr = {4, 1, 8, 5};
    
    int start = 0; 
    int end = arr.size() - 1; 

    int count = 0;

    cout << mergeSort(arr, start, end, count) << endl;
    

    return 0;
}