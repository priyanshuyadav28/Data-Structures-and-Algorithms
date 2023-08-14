#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;

void printAllSubArray(vector<int> &arr, int &start, int end)
{
    if (end >= arr.size())
    {
        return;
    }

    for (int i = start; i < end; i++)
    {
        cout << arr[i];
    }
    cout << endl; 

    printAllSubArray(arr, start, end + 1);
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};

    int start = 0;
    int end = 0;

    printAllSubArray(arr, start, end);

    return 0;
}