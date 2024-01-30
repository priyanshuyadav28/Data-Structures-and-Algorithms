#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

bool isSafe(int x, int y, int row, int col, int arr[][3], vector<vector<bool> >& visited) {
    if ( ((x >= 0 && x < row) && (y >=0 && y < col)) && (arr[x][y] == 1) && (visited[x][y] == false))
    {
        return true;
    } 
    else {
        return false;
    }
    
}

void solveMaze(int arr[3][3], int row, int col, int i, int j, vector<vector<bool>>& visited, vector<string>& path, string output) {

    if (i == row - 1 && j == col - 1)
    {
        // answer found 
        path.push_back(output);
        return;
    }

    // down -> i + 1, j
    if (isSafe(i + 1, j, row, col, arr, visited))
    {
        visited[i + 1][j] = true;
        solveMaze(arr, row, col, i + 1, j, visited, path, output + 'D');
        // backtrak 
        visited[i + 1][j] = false;
    }
    

    // left -> i, j - 1
    if (isSafe(i, j - 1, row, col, arr, visited))
    {
        visited[i][j - 1] = true;
        solveMaze(arr, row, col, i, j - 1, visited, path, output + 'L');
        // backtrak 
        visited[i][j - 1] = false;
    }

    // right -> i, j + 1
    if (isSafe(i, j + 1, row, col, arr, visited))
    {
        visited[i][j + 1] = true;
        solveMaze(arr, row, col, i, j + 1, visited, path, output + 'R');
        // backtrak 
        visited[i][j + 1] = false;
    }

    // up -> i - 1, j
    if (isSafe(i  - 1, j, row, col, arr, visited))
    {
        visited[i - 1][j] = true;
        solveMaze(arr, row, col, i - 1, j, visited, path, output + 'U');
        // backtrak 
        visited[i - 1][j] = false;
    }
    
}

int main() {

    int maze[3][3] = {
        {1, 0, 0}, 
        {1, 1, 0}, 
        {1, 1, 1}
    };

    int row = 3;
    int col = 3;


    vector<vector<bool> > visited(row, vector<bool>(col, false));
    // src ki value ko true mark krdete hai 
    visited[0][0] = true;

    vector<string> path;
    string output = "";

    solveMaze(maze, row, col, 0, 0, visited, path, output);

    cout << "Printing the Results " << endl;
 
    for (auto i : path)
    {
        cout << i << " ";
    }
    cout << endl;
    



    return 0; 
}