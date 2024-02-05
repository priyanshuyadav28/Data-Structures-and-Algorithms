#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

int partition(int arr[], int s, int e) {
    // step 1 -> choose pivot element 
    int pivotIndex = s;
    int pivotElement = arr[s];

    // step 2 -> find correct position for pivot element and place pivot element there
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivotElement)
        {
            count++;
        }
    }
    // jab mai loop se bahar aaya to mere pass pivot ki correct index ki position ready hai 
    int rightIndex = s + count; // correct index where pivot element should be
    swap(arr[pivotIndex], arr[rightIndex]);
    // now the pivot element is at correct position
    // update pivotIndex 
    pivotIndex = rightIndex;

    // step 3 -> pivot k left me small elements and right me bade elements
    int i = s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivotElement)
        {
            i++;
        }

        while (arr[j] > pivotElement)
        {
            j--;
        }

        // 2 case are possible now 
        // case 1-> you found an elements to swap: mtlb ki galat element mile jaise left me kuch aise elements hai jo pivot se bade hai ya right me kuch aise elements hai jo pivot se chote hai
        // case 2-> no need to swap

        // elements larger than pivot in left side or smaller at right side will be swapped 
        if (i < pivotIndex && j > pivotIndex)
            swap(arr[i], arr[j]);
        
    }

    return pivotIndex;

}

void quickSort(int arr[], int s, int e) {
    // base case 
    if (s >= e)
    {
        return;
    }

    // partition logic returns pivot index
    int p = partition(arr, s, e);

    // recursive calls
    // pivot element -> left
    quickSort(arr, s, p - 1);
    
    // pivot element -> right
    quickSort(arr, p + 1, e);  
}

int main() {

    // int arr[] = {8, 1, 3, 4, 30, 50, 40};
    // int arr[] = {8, 8, 1, 3, 6, 10, 150, 40,};
    int arr[] = {9, 2, 1, 3, 5, 12};
    int n = 6;

    int s = 0;
    int e = n - 1;

    quickSort(arr, s, e);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0; 
}