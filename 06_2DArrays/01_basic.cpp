#include<iostream>
using namespace std;

int main() {

    int arr[3][3] = {
        {1, 6, 8}, 
        {3, 9, 2}, 
        {5, 7, 4}
    };

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }

        cout << endl;        
    }
    


    return 0;
}