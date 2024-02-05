#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

void mergeArray(int arr[], int s, int e) {
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid; 
     
    int* left = new int[len1];
    int* right = new int[len2];

    // copy values in left array 
    int k = s;
     
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k]; // entering value in left array 
        k++;
    }       
    
    
    // copy values in right array 
    k = mid + 1;

    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k];
        k++;
    }

    // merge the two sorted array 
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while (leftIndex < len1 && rightIndex < len2) {
        if (left[leftIndex] < right[rightIndex])
        {
            arr[mainArrayIndex++] = left[leftIndex++];
        } 
        else {
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }

    while (leftIndex < len1)
    {
        arr[mainArrayIndex++] = left[leftIndex++]; 
    }
    

    while (rightIndex < len2)
    {
        arr[mainArrayIndex++] = right[rightIndex++];
    }

    // delete left and right wala created array to save space 
    
    


}

void mergeSort(int arr[], int s, int e) {
    // base case 
    if (s >= e)
    {   
        return;
    }

    int mid = s + (e - s) / 2;

    // left part sort kardo recursion 
    mergeSort(arr, s, mid);

    // right part sort kardo recursion 
    mergeSort(arr, mid + 1, e);

    // now merge the two sorted arrays 
    mergeArray(arr, s, e);
} 

int main() {

    int arr[] = {4, 5, 13, 2, 17};
    int n = 5;
    

    // int s = 0;
    // int e = n - 1;
    // mergeSort(arr, s , e);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    

    return 0; 
}