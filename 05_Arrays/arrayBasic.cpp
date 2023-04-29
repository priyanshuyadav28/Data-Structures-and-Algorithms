#include<iostream>
#include<cstring>

using namespace std;

int main() {

    // int arr[5]; // created an integer array with size 5
    // char arr2[5]; // created an character array with size 5

    // int arr3[] = {2, 3, 1, 7}; // created an intger array with and initialized it with some values .
    // cout << "arr3 created succesfully ." << endl; 

    // int brr[5] = {2, 4, 6, 8, 10};
    // cout << "brr created succesfully ." << endl; 
    
    // int crr[10] = {2, 4, 6, 8, 10};
    // cout << "crr created succesfully ." << endl; 

    // // int drr[4] = {2, 4, 6, 8, 10}; 
    // cout << "arr3 created succesfully ." << endl; 
    // this would throw an error as the size given is 4 but the array has 5 values. 

    int arr[] = {1, 3, 4, 7, 5};
    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;
    // cout << arr[3] << endl;
    // cout << arr[4] << endl;
    // cout << arr[5] << endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Enter the value at index " << i << endl;
    //     cin >> arr[i];
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout <<"The value at index " << i << " in the array is : " << arr[i] * 2 << endl;
    // }

    int arr2[] = {1, 3, 5, 7, 9};

    // for (int i = 0; i < 5; i++)
    // {
    //     arr[i] == 1;
    // }
    // instead of doing this we can use memset function 
    memset(arr2, '1', sizeof(arr2));

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    
    
    

    return 0;
}