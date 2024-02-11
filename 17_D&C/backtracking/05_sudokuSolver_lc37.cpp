#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;

bool isSafe(vector<vector<char>> &board, int row, int col, int value)
{
    int n = board.size();

    // check for row
    for (int col = 0; col < n; col++)
    {
        if (board[row][col] == value)
        {
            return false;
        }
    }

    // check for col
    for (int row = 0; row < n; row++)
    {
        if (board[row][col] == value)
        {
            return false;
        }
    }
    // check for 3x3 box in board
    for (int i = 0; i < n; i++)
    {
        if (board[3 * (row / 3) + (i / 3)][3 * (col / 3) + (i % 3)] == value)
        {
            return false;
        }
    }
}

bool solveSudoku(vector<vector<char>> &board)
{
    // iterate to the [row][col] of the board for placing a digit
    int n = board.size();
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < 9; col++)
        {
            // check weather the cell is empty or not if already a digit is placed we do not have to place anythin
            if (board[row][col] == '.')
            {
                // try to fill value from 1 to 9
                for (char value = '1'; value <= '9'; value++)
                {
                    if (isSafe(board, row, col, value))
                    {
                        board[row][col] = value;
                        // recursion
                        bool furtherSolution = solveSudoku(board);
                        if (furtherSolution == true)
                        {
                            return true;
                        }
                        else
                        {
                            // backtrack
                            board[row][col] = '.';
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}

int main()
{

    int rows = 9;
    int cols = 9;
    vector<vector<char>> board(9, vector<char>(9, '.'));

    solveSudoku(board);

    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            cout << board[i][j] << " "; 
        }
        cout << endl; 
    }
    

    return 0;
}