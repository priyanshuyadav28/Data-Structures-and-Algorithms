#include <iostream>
#include<vector>

using namespace std;

bool linearSearch(int arr[][3], int key)
{
    for (int row = 0; row < 3; row++)
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

int main()
{

    // declaration
    // int arr[3][3];

    // INITIALIZATION
    int arr[3][3] = {
        {1, 6, 8},
        {3, 9, 2},
        {5, 7, 4}};

    // PRINTING THE ARRAY ROW, COL WISE
    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 3; col++)
    //     {
    //         cout << arr[row][col] << " ";
    //     }

    //     cout << endl;
    // }

    // cout << endl;

    // PRINTING THE ARRAY IN COL , ROW DIRECTION
    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 3; col++)
    //     {
    //         cout << arr[col][row] << " ";
    //     }

    //     cout << endl;
    // }

    // PRINTING SUM OF ROWS OF THE ARRAY

    // for (int row = 0; row < 3; row++)
    // {
    //     int sum = 0;

    //     for (int col = 0; col < 3; col++)
    //     {
    //         sum += arr[row][col];
    //     }

    //     cout << sum;
    //     cout << endl;
    // }

    // cout << endl;

    // linear Search on 2D array

    int key = 6;
    cout << linearSearch(arr, key);
    

    return 0;
}