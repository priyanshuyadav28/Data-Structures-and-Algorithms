#include<iostream>
using namespace std;


void printArray(int arr[][3]) {
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " " ;            
        }
        cout << endl;
        
    }
}


bool findKey(int arr[][3], int key) {

    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (arr[row][col] == key)
            {
                return true;
            }
            
        }
        
    }

    return false;
    
}


int findMax(int arr[][3]) {

    int max = INT32_MIN;

    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 3; col++)
        {         
            if (arr[row][col] > max)
            {
                max = arr[row][col];
            }
            
        }
        
    }

    return max;
}


void transpose(int arr[][3], int transpose[][3]) {

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            transpose[col][row] = arr[row][col];           
        }
    }
}



int main() {
    
    int arr[4][3] = {
        {1, 3, 5},
        {2, 7, 9}, 
        {4, 5, 0}
    };

    // FIND KEY 
    // int key; 

    // cout << "Input the Key : " << endl;
    // cin>> key;

    // bool ans = findKey(arr, key);

    // cout << ans;

    // MAX ELEMENT IN ARRAY 
    // int max = findMax(arr);

    // cout << "The maximum element in the array is: " << max << endl;

    // TRANSPOSE OF A MATRIX 
    int transposeArr[3][3];
    transpose(arr, transposeArr);
    printArray(transposeArr);
    
    

    


    return 0;
}