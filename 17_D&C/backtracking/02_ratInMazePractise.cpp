#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

bool isSafe(int x, int y, int rows, int cols, int maze[][3], vector<vector<bool> >& visited) {
    if ( ( (x >= 0 && x < rows - 1) && (y >= 0 && y < cols)) && (maze[x][y] == 1) && (visited[x][y] == false))
    {
        return true;
    }
    else {
        return false;
    }
    
}

void solveMaze(int maze[3][3], int rows, int cols, int x, int y, vector<vector<bool>>& visited, vector<string>& path, string output) {
    
    if (x == rows - 1 && y == cols - 1)
    {
        path.push_back(output);
        return;
    }

    // solve cases for 
    // down (i + 1, j) ::: i here is x and j is y 
    if (isSafe(x + 1, y, rows, cols, maze, visited))
    {
        // if is safe is true
        // mark visited as true;
        visited[x + 1][y] = true;
        // recursive call 
        solveMaze(maze, rows, cols, x + 1, y, visited, path, output + 'D');
        // backtracking
        visited[x + 1][y] = false;

    }
    

    // right (i, j + 1)
    if (isSafe(x, y + 1, rows, cols, maze, visited))
    {
        // if is safe is true
        // mark visited as true;
        visited[x][y + 1] = true;
        // recursive call 
        solveMaze(maze, rows, cols, x, y + 1, visited, path, output + 'R');
        // backtracking
        visited[x][y + 1] = false;
    }


    // left (i , j - 1)
    if (isSafe(x, y - 1, rows, cols, maze, visited))
    {
        // if is safe is true
        // mark visited as true;
        visited[x][y - 1] = true;
        // recursive call 
        solveMaze(maze, rows, cols, x, y - 1, visited, path, output + 'L');
        // backtracking
        visited[x][y - 1] = false;
    }

    // up (i - 1, j)
    if (isSafe(x - 1, y, rows, cols, maze, visited))
    {
        // if is safe is true
        // mark visited as true;
        visited[x - 1][y] = true;
        // recursive call 
        solveMaze(maze, rows, cols, x - 1, y, visited, path, output + 'U');
        visited[x - 1][y] = false;
    }
    
}

int main() {

    int maze[3][3] = {
        {1, 0, 0},
        {1, 1, 0},
        {1, 1, 1}
    };

    if (maze[0][0] == 0)
    {
        cout << "Not solution exist " << endl; 
        return 0; 
    }
    

    // defining the total row and col maze has 
    int rows = 3;
    int cols = 3;

    // creating the visited array to mark the value visited once the rat has visited the box 
    vector< vector<bool> > visited(rows, vector<bool>(cols, false));

    // define the initial position of the rat (0, 0) as true
    visited[0][0] = true;

    // to store the output 
    vector<string> path;
    string output = "";

    solveMaze(maze, rows, cols, 0, 0, visited, path, output);

    for (auto i : path) {
        cout << i << " ";
    }
    
    cout << endl;


    return 0; 
}