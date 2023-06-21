#include <iostream>
#include <vector>

using namespace std;


// this method will modify the array 
int findDuplicate(int arr[], int n)
{
    int ans = -1;

    for (int i = 0; i < n; i++)
    {
        int index = abs(arr[i]);
        
        // already visited 
        if (arr[index] < 0) 
        {
            ans = index;
        }

        // if not already visited change the value in negative 
        arr[index] *= -1;
    }

    return ans;
}

// this is another method to find the extra element from the array repeated 2 or more than 2 times in the array in an array of [n - 1] size and elements till n 
int findDuplicateSwap(int arr[], int n) {

    while (arr[0] != arr[arr[0]])
    {
        swap(arr[0], arr[arr[0]]);
    }

    return arr[0];

}


void missingElementWithDuplicates(int arr[], int n) {

    int i = 0;
    while (i < n)
    {
        int index = arr[i] - 1;

        if (arr[i] != arr[index])
        {
            swap(arr[i], arr[index]);
        }

        else {
            ++i;
        }  

    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            cout << i + 1 << " ";
        }
        
    }
    
    
}

int main()
{

    // int arr[] = {1, 3, 4, 2, 2};
    int arr[] = {2, 3, 1, 2, 3};
    int n = sizeof(arr) / sizeof(int);

    cout << findDuplicate(arr, n);
    // findDuplicateMultiple(arr, n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}