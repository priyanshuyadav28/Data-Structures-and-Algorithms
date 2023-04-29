#include <iostream>
using namespace std;

// int zeroAndOneCount(int arr[], int size) {
//     int zeroCount = 0;
//     int oneCount = 0;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == 0)
//         {
//             zeroCount = zeroCount + 1;
//         }

//         if (arr[i] == 1)
//         {
//             oneCount += 1;
//         }
//     }

//     cout << "Zero count = " << zeroCount << endl;
//     cout << "One count = " << oneCount << endl;

// }

int max(int arr[], int size)
{
    // int max = 0;
    int max = INT32_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

void extremePrints(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {

        if (start == end)
        {
            cout << arr[start] << " ";
        }

        else
        {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }
        start++;
        end--;
    }
}

void RevArr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}

int main()
{
    // int arr[] = {0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1};
    // int arr2[] = {2, 1, 5, 8, 9, 100, 11, 3, 16, 7};
    // int arr3[] = {10, 20, 30, 40, 50, 60, 70};
    int arr4[] = {10, 20, 30, 40, 50, 60, 70};

    int size = 7;

    // cout << zeroAndOneCount(arr, size);
    // cout << max(arr2, size);
    // extremePrints(arr3, size);
    RevArr(arr4, size);

    return 0;
}