#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;

bool isSorted(int arr[], int& size, int i)
{
    if (i == size - 1) // since size = size which is length + 1 and starts with 1 we have to check only till size - 1
    {
        return true;
    }

    if (arr[i + 1] < arr[i])
        return false;


    return isSorted(arr, size, i + 1);
}

int main()
{

    int arr[] = {2, 3, 4, 5, 8, 9 , 15, 29};
    int sizeOfarr = sizeof(arr) / sizeof(int);

    // int i = 0;   
    // // int length = sizeOfarr - 1; // I waster 30 mins here by h = sizeOfarr

    // bool ans = isSorted(arr, sizeOfarr, i);

    // cout << ans << endl;

    







    return 0;
}