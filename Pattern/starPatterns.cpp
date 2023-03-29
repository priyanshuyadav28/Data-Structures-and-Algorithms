#include <iostream>
using namespace std;

void solidRectangle(int rowCount, int colCount)
{

    for (int row = 0; row < rowCount; row++)
    {
        for (int col = 0; col < colCount; col++)
        {
            /* code */
            cout << "* ";
        }

        cout << endl;
    }
}

void squarePattern(int rowCount, int colCount)
{

    for (int row = 0; row < rowCount; row++)
    {
        for (int col = 0; col < colCount; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

void hollowRectagle(int rowCount, int colCount)
{
    for (int row = 0; row < rowCount; row++)
    {
        if (row == 0 || row == colCount - 1)
        {
            for (int col = 0; col < colCount; col++)
            {
                cout << "* ";
            }
        } 
        else {

            cout << "* ";

            for (int spaces = 0; spaces < colCount - 2; spaces++)
            {
                cout << " ";
            }

            cout << "* "; 
        }
        cout << endl;
    }
}

void halfPyramid(int rowCount, int colCount) {
    for (int row = 0; row < rowCount; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        } 
        cout << endl;
    }
}

void invertedHalfPyramid(int rowCount, int colCount) {
    for (int row = 0; row < rowCount; row++)
    {
        for (int col = 0; col < rowCount - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
}

void numbericHalfPyramid(int rowCount, int colCount) {

    for (int row = 0; row < rowCount; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
           cout << col + 1 << " ";
        }
        cout << endl;
    }
    
}

void numberiInvertedHalfPyramid(int rowCount, int colCount) {
    for (int row = 0; row < rowCount; row++)
    {
        for (int col = 0; col < rowCount - row; col++)
        {
            cout << col + 1 << " ";
        }
        
        cout << endl;
    }
    
}

void solidStarPyramid(int rowCount, int colCount) {
    for (int row = 0; row < rowCount; row++)
    {
        for (int space = 0; space < rowCount - row; space++)
        {
            cout << " ";
        }
        
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        
        cout << endl;
        /* code */
    }
    
}

void solidStarPyramidReverse(int rowCount, int colCount) {
    for (int row = 0; row < rowCount; row++)
    {
        for (int spaces = 0; spaces < row; spaces++)
        {
           cout << " ";
        }

        for (int col = 0; col < rowCount - row; col++)
        {
            cout << "* ";
        }

        cout << endl;   
    }
}

void solidDiamond(int rowCount, int colCount) {
    // Full pyramid 
     for (int row = 0; row < rowCount; row++)
    {
        for (int space = 0; space < rowCount - row - 1; space++)
        {
            cout << " ";
        }
        
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        
        cout << endl;
        /* code */
    }
    // Inverted Pyramid 
    for (int row = 0; row < rowCount; row++)
    {
        for (int spaces = 0; spaces < row; spaces++)
        {
           cout << " ";
        }

        for (int col = 0; col < rowCount - row; col++)
        {
            cout << "* ";
        }

        cout << endl;   
    }
    
}


int main()
{

    int n;

    // int numberOfRow = 4;
    // int numberOfCol = 4;

    // solidRectangle(3, 4);
    // squarePattern(4, 4);
    // hollowRectagle(7, 9);
    // halfPyramid(6, 0);
    // invertedHalfPyramid(6, 0);
    // numbericHalfPyramid(5, 0);
    // numberiInvertedHalfPyramid(5, 0);
    // solidStarPyramid(15, 0);
    // solidStarPyramidReverse(6, 0);
    solidDiamond(10, 0);


    return 0;
}