#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;

int partition(int arr[], int s, int e)
{
    int pivotIndex = s;
    int pivotElement = arr[s];

    int count = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivotElement)
        {
            count++;
        }
    }

    int correctIndex = s + count;
    swap(arr[pivotIndex], arr[correctIndex]);

    // update pivot index
    pivotIndex = correctIndex;

    int i = s;
    int j = e;

    // check all left me pivot se chote and right me pivot se bade elements ho
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

        // now two case are possible either element at left is greater than pivot and in right the elements is smaller than pivot
        // or case2: ->elements are correct that is left me already pivot se chote ho aur right me already pivot se bade ho 
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    // partition logic

    int p = partition(arr, s, e);

    // left call
    quickSort(arr, s, p - 1);

    // right call
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[] = {8, 1, 3, 4, 20, 50, 30};
    // int n = sizeof(arr) / sizeof(int);
    int n = 7; 

    int s = 0;
    int e = n - 1;

    quickSort(arr, s, e);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}