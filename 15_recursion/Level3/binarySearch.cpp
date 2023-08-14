#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

int binarySearch(int arr[], int& key, int& start, int& end) {
    if (start > end)
        return -1;
    
    
    int mid = start + (end - start) / 2;

    if (arr[mid] == key)
        return mid;

    if (arr[mid] > key)
    {   
        end = mid - 1;
        return binarySearch(arr, key, start, end);
    } 
    else {
        start = mid + 1;
        return binarySearch(arr, key, start, end);
    }

}


int main() {

    int arr[] = {2, 3, 4, 6, 8, 12, 18, 91};
    int size = sizeof(arr) / sizeof(int);

    int key = 2;
    int start = 0;
    int end = size - 1;

    cout << binarySearch(arr, key, start, end) << endl;


    return 0; 
}