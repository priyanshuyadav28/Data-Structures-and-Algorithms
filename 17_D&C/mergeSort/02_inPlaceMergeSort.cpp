#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

void mergeInPlace(vector<int>& arr, int mid, int start, int end) {
    int totalLength = end - start + 1; 
    int gap = totalLength / 2 + totalLength % 2; 

    while (gap > 0)
    {
        int i = start; 
        int j = start + gap; 
        while (j <= end) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]); 
            }
            ++i;
            ++j; 
        }
        gap = gap <= 1 ? 0 : (gap / 2) + (gap % 2); 
    }
    
}

void mergeSort(vector<int>& arr, int start, int end) {
    if (start >= end) return; 

    int mid = start + (end - start) / 2; 

    mergeSort(arr, start, mid); 
    mergeSort(arr, mid + 1, end); 

    mergeInPlace(arr, mid, start, end); 
}

int main() {

    vector<int> arr = {3, 1, 5, 2}; 
    
    int start = 0; 
    int end = arr.size() - 1; 

    mergeSort(arr, start, end); 

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " "; 
    }


    return 0; 
}