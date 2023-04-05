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
        else
        {

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

void halfPyramid(int rowCount, int colCount)
{
    for (int row = 0; row < rowCount; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void invertedHalfPyramid(int rowCount, int colCount)
{
    for (int row = 0; row < rowCount; row++)
    {
        for (int col = 0; col < rowCount - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void numbericHalfPyramid(int rowCount, int colCount)
{

    for (int row = 0; row < rowCount; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1 << " ";
        }
        cout << endl;
    }
}

void numberiInvertedHalfPyramid(int rowCount, int colCount)
{
    for (int row = 0; row < rowCount; row++)
    {
        for (int col = 0; col < rowCount - row; col++)
        {
            cout << col + 1 << " ";
        }

        cout << endl;
    }
}

void solidStarPyramid(int rowCount, int colCount)
{
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

void solidStarPyramidReverse(int rowCount, int colCount)
{
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

void solidDiamond(int rowCount, int colCount)
{
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

void hollowDiamond(int rowCount, int colCount)
{
    // UPper part
    for (int row = 0; row < rowCount; row++)
    {
        for (int spaces = 0; spaces < rowCount - row - 1; spaces++)
        {
            cout << " ";
        }

        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (col == 0 || col == 2 * row)
            {
                cout << "*";
            }
            // else if (col == 2 * row)
            // {
            //     cout << "*";
            // }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    // LowerPart
    for (int row = 0; row < rowCount; row++)
    {
        for (int spaces = 0; spaces < row; spaces++)
        {
            cout << " ";
        }

        for (int col = 0; col < 2 * rowCount - 2 * row - 1; col++)
        {
            if (col == 0 || col == 2 * rowCount - 2 * row - 2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void flippedSolidDiamond(int n)
{

    // first part starts
    for (int row = 0; row < n; row++)
    {
        for (int cols = 0; cols < n - row; cols++)
        {
            cout << "*";
        }

        for (int space = 0; space < 2 * row + 1; space++)
        {
            cout << " ";
        }

        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }

        cout << endl;
    }
    // first part ends

    // second part starts
    for (int row = 0; row < n; row++)
    {
        for (int cols = 0; cols < row + 1; cols++)
        {
            cout << "*";
        }

        for (int space = 0; space < (2 * n - 1) - (2 * row); space++)
        {
            cout << " ";
        }

        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void fancyPattern(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << row + 1;
            if (col != row)
            {
                cout << "*";
            }
        }

        cout << endl;
    }

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << n - row;
            if (col != n - row - 1)
            {
                cout << "*";
            }
        }

        cout << endl;
    }
}

void alphabetPalindromePyramid(int n)
{
    for (int row = 0; row < n; row++)
    {
        int col;

        for (col = 0; col < row + 1; col++)
        {
            int ans = col + 1;
            char ch = ans + 'A' - 1;
            cout << ch;
        }
        col = col - 1;

        // reverse printing
        for (col = col; col >= 1; col--)
        {
            int ans = col;
            char ch = ans + 'A' - 1;
            cout << ch;
        }

        cout << endl;
    }
}

void numericFullPyramid(int n)
{
    for (int row = 0; row < n; row++)
    {
        int start = row + 1;
        // int col2 = row + 1;

        for (int space = 0; space < n - row - 1; space++)
        {
            cout << " ";
        }

        for (int cols = 0; cols < row + 1; cols++)
        {
            cout << start;
            start += 1;
            // col2 += 1;
        }

        int revStart = 2 * row; // since the right side part which we have to print follows the table of two as each line starts with 2, 4, 6, 8 and so on wich we get on multiplying it by row in this case.  *** beautiful pattern

        for (int back = 0; back < row; back++)
        {
            cout << revStart;
            revStart = revStart - 1;
        }

        cout << endl;
    }
}

void numericHollowPyramid(int n)
{

    // row loop
    for (int row = 0; row < n; row++)
    {
        // space loop
        for (int spaces = 0; spaces < n - row - 1; spaces++)
        {
            cout << " ";
        }

        // numbers with spaces in between
        int start = 1;

        for (int cols = 0; cols < 2 * row + 1; cols++)
        {
            // -> first and last row (special case)
            if (cols == 0 || row == n - 1)
            {
                if (cols % 2 == 0)
                {
                    cout << start;
                    start += 1;
                }
                else {
                    // odd 
                    cout << " ";
                }
                
            }
            else
            {
                // first col
                if (cols == 0)
                {
                    cout << 1;
                } 
                else if (cols == 2 * row + 1 - 1)
                {
                    cout << row + 1;
                }

                else {
                    cout << " ";
                }
            }
           
        }
         cout << endl;
        
    }
}
    int main() {
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
        // solidDiamond(10, 0);
        // hollowDiamond(5, 0);
        // flippedSolidDiamond(6);
        // fancyPattern(4);
        // alphabetPalindromePyramid(5);
        // numericFullPyramid(5);
        numericHollowPyramid(5);

        return 0;
    }