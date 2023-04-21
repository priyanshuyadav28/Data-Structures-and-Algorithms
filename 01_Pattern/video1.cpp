#include <iostream>
using namespace std;

void rectangle(int rowCount, int colCount)
{
    // row
    for (int rows = 0; rows < rowCount; rows++)
    {
        if (rows == 0 || rows == rowCount - 1)
        {
            for (int i = 0; i < colCount; i++)
            {
                cout << "* ";
            }
         }
        else
        {
            cout << "* ";
            for (int i = 0; i < colCount - 2; i++)
            {
                cout << "  ";
            }
            cout  << "* ";
            
        }

        cout << endl;
    }

    cout << endl;

    // cout << (row + col) << endl;
}

void halfPyramid(int rowCount) {
    // row 
    for (int row = 0; row < rowCount; row++)
    {
        /* col */
        for (int col = 0; col < row + 1; col++)
        {
           cout << "* ";
        }

        cout << endl;
        
    }
    
}

void invertedHalfPyramid(int n) {
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }

        cout << endl;
        
    }
    
}

void numericHalfPyramid(int n) {
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1 ;
        }

        cout << endl;
        
    }
    
}

int main()
{

    // rectangle(7, 15);
    // halfPyramid(6);
    invertedHalfPyramid(6);
    // numericHalfPyramid(5);

    // int n;

    // if (cin >> n)
    // {
    //    cout << "Babbar" ;
    // }
    // if the value of n is entered an int then Babbar will be printed.

    // if (cout << "Babbar")
    // {
    //    cout << "Babbar" ;
    // }
    // both babbar will be printed

    return 0;
}