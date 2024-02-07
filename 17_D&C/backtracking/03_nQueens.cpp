#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;

bool isSafe(vector<vector<char>> &board, int row, int col, int n)
{
    // check on the back of the board in two diagonal and one straight weather any queen is placed or not if not return true else return false
    int i = row;
    int j = col;

    // simple back case of the current queen
    while (j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        j--;
    }

    i = row;
    j = col;

    // bottom diagonal case
    while (i >= 0 && j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        i--;
        j--;
    }

    i = row;
    j = col;

    // up diagonal back case
    while (i < n && j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

void printSolution(vector<vector<char>> board, int col, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void solveQueen(vector<vector<char>> &board, int col, int n)
{
    // base case
    if (col >= n)
    {
        printSolution(board, col, n);
        return;
    }

    // solve for one case -> one case is placing the queen in all the n rows
    for (int row = 0; row < n; row++)
    {
        if (isSafe(board, row, col, n))
        {
            board[row][col] = 'Q';
            // recursive call
            solveQueen(board, col + 1, n);

            // backtracking
            board[row][col] = '-';
        }
    }
}

int main()
{

    int n = 5;
    vector<vector<char>> board(n, vector<char>(n, '-'));

    int col = 0;

    solveQueen(board, col, n);

    return 0;
}