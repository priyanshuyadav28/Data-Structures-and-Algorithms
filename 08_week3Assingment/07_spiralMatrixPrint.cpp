#include <iostream>
#include <vector>
// Given an m x n matrix, return all elements of the matrix in spiral order.
using namespace std;

vector<int> matrixSpiralPrint(vector<vector<int>> matrix)
{

    vector<int> ans;

    int m = matrix.size();    // row count
    int n = matrix[0].size(); // col count

    int totalElements = m * n; // total elements in a matrix = m * n

    int startingRow = 0;
    int endingCol = n - 1; // since n = matrix[0].size() so ending col = n - 1
    int endingRow = m - 1;
    int startingCol = 0;

    int count = 0;

    while (count < totalElements)
    {
        // print startingRow
        for (int i = startingCol; i <= endingCol && count < totalElements; i++)
        { // count < totalElements condition is there so that while inserting the elemetns if the elements in the matrix is over so the condition for the loop becomes false 
         
            ans.push_back(matrix[startingRow][i]);
            count++; // whernever a push back occurs count is incremented

            //  if(count >= totalElements) {
            //      break;
            //  }
        }

        startingRow++;

        // print endingCol
        for (int i = startingRow; i <= endingRow && count < totalElements; i++)
        {
            ans.push_back(matrix[i][endingCol]);
            count++;
        }

        endingCol--;

        //  print endingRow
        for (int i = endingCol; i >= startingCol && count < totalElements; i--)
        {
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;

        // print starting col
        for (int i = endingRow; i >= startingRow && count < totalElements; i--)
        {
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}

int main()
{

    vector<vector<int>> v{
        {1, 2, 3, 5},
        {6, 7, 8, 9},
        {10, 11, 12, 13},
        {14, 15, 16, 17}};

    return 0;
}