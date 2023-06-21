#include<iostream>
#include<vector>
using namespace std;

// an array is a data structure which stores homogeneous data in contigious memory location 

void doubles(int arr[]) {
    for (int i = 0; i < 4; i++)
    {
        cout << "Input the value at index "<< i <<endl;
        cin>>arr[i];
    }

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] * 2 << " ";
    }
    
    
}

void ones(int arr[]) {
    for (int i = 0; i < 4; i++)
    {
        cout << "Input the value at index "<< i <<endl;
        cin>>arr[i];
    }

    for (int i = 0; i < 4; i++)
    {
        arr[i] = 1;
        cout << arr[i]  << " ";
    }
    
    
}


int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
        
    }

    return -1;
    
}



int main()
{
    // declaration of array 
    // int arr[4];
    
    // Initilization 
    // int arr2[3] = {3, 1, 5};

    // doubles(arr);
    // ones(arr);


    // to assign all the storage space of an array with 0 

    // int brr[10] = {0};

    // int arr[] = {1, 2, 9, 3, 6, 12, 5, 19};
    // int size = sizeof(arr) / sizeof(int);

    // cout << linearSearch(arr, size, 6);
    


    return 0;
}
