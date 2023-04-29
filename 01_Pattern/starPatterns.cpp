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
                else
                {
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

                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}

void numericHollowHalfPyramid2(int n)
{
    // row
    for (int row = 0; row < n; row++)
    {
        // col
        for (int col = 0; col < row + 1; col++)
        {
            // print
            if (col == 0 || col == row || row == n - 1)
            {
                cout << col + 1;
            }
            else
            {
                cout << " ";
            }
        }
        // new line
        cout << endl;
    }
}

void numerichollwInvertedPyramid(int n)
{

    for (int row = 0; row < n; row++)
    {
        for (int col = row + 1; col <= n; col++)
        {

            if (col == row + 1 || col == n || row == 0)
            {
                cout << col;
            }
            else
            {
                cout << " ";
            }

            // cout << col + 1;
        }
        cout << endl;
    }
}

void numericPalindromeEquilateralPyramid(int n)
{

    // row
    for (int row = 0; row < n; row++)
    {
        // spaces
        for (int spaces = 0; spaces < n - row; spaces++)
        {
            cout << "  ";
        }

        // first part

        int start = 0;

        for (int col = 0; col <= row; col++)
        {
            cout << start + 1 << " ";
            start = start + 1;
        }

        // second part

        for (int col = 0; col < row; col++)
        {
            start = start - 1;
            cout << start << " ";
        }

        cout << endl;
    }
}

void solidHalfDiamond(int n)
{
    for (int rows = 0; rows < (2 * n) - 1; rows++)
    {
        if (rows < n)
        {
            for (int cols = 0; cols < rows + 1; cols++)
            {
                cout << "* ";
            }

            cout << endl;
        }

        else if (rows > n || rows == n)
        {
            for (int cols = 0; cols < (2 * n) - rows - 1; cols++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
}

void fancyPattern1(int n)
{
    if (n > 9)
    {
        cout << "Please enter value less than 9 " << endl;
    }

    // row
    for (int row = 0; row < n; row++)
    {
        int start_num_index = 8 - row;
        int num = row + 1;
        int count_num = num;

        for (int cols = 0; cols < 17; cols++)
        {
            if (cols == start_num_index && count_num > 0)
            {
                cout << num;

                start_num_index += 2;
                count_num--;
            }

            else
            {
                cout << "*";
            }
        }

        cout << endl;
    }
}

void fancyPattern2(int n)
{
    int c = 1;
    for (int rows = 0; rows < n; rows++)
    {
        for (int cols = 0; cols <= rows; cols++)
        {
            cout << c;
            c++;
            if (cols < rows)
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    int start = c - n;

    for (int rows2 = 0; rows2 < n; rows2++)
    {
        int k = start;
        for (int cols2 = 0; cols2 <= n - rows2 - 1; cols2++)
        {
            cout << k;
            k++;
            if (cols2 < n - rows2 - 1)
            {
                cout << "*";
            }
        }
        start = start - (n - rows2 - 1);
        cout << endl;
    }
}

void fancyPattern3(int n)
{

    for (int row = 0; row < n; row++)
    {

        int cond;

        if (row <= n / 2)
        {
            cond = 2 * row;
        }

        else
        {
            cond = 2 * (n - row - 1);
        }

        for (int col = 0; col < cond + 1; col++)
        {
            if (col == 0)
            {
                cout << "*";
            }

            if (col <= cond / 2)
            {
                cout << col + 1;
            }
            else
            {
                cout << cond - col + 1;
            }
        }
        if (row != 0)
        {
            /* code */
            cout << "*";
        }

        cout << endl;
    }
}

void floydsTriangle(int n)
{
    int storeCount = 0;

    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < row + 1; col++)
        {
            cout << storeCount + 1 << " ";
            storeCount += 1;
        }

        cout << endl;
    }
}

void pascalTriangle(int n)
{
    // the formula to calculate pascal triangle is binomial coefficient
    // c  = c (i - j) / j;  where i and j are row and columns respectively.
    for (int row = 1; row <= n; row++)
    {
        for (int i = 0; i < n - row; i++)
        {
            cout << " ";
        }

        int c = 1;

        for (int col = 1; col <= row; col++)
        {
            cout << c << " ";
            c = c * (row - col) / col;
        }

        cout << endl;
    }
}

void butterflyPattern(int n)
{
    for (int row = 0; row < 2 * n; row++)
    {
        for (int col = 0; col < 2 * n; col++)
        {
            if (row < (2 * n) / 2)
            {
                if (col <= row || col >= (2 * n) - row - 1)
                {
                    cout << "*" << " ";
                }
                else
                {
                    cout << "  ";
                }
            }

            else {
                if (col < (2 * n) - row || col >= row)
                {
                    cout << "*" << " ";

                }
                else {
                    cout << "  ";
                }
                
            }
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
    // solidDiamond(10, 0);
    // hollowDiamond(5, 0);
    // flippedSolidDiamond(6);
    // fancyPattern(4);
    // alphabetPalindromePyramid(5);
    // numericFullPyramid(5);
    // numericHollowPyramid(5);
    // numericHollowHalfPyramid2(5);
    // numerichollwInvertedPyramid(5);
    // numericPalindromeEquilateralPyramid(9);
    // solidHalfDiamond(5);
    // fancyPattern1(7);
    // fancyPattern2(4);
    // fancyPattern3(7);
    // floydsTriangle(7);
    // pascalTriangle(5);
    butterflyPattern(5);

    return 0;
}