#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

bool isPossibleSolution(vector<int> stalls, int k, int mid)
{
    // can we place k cows with at least mid distance b/w cows
    int cow = 1;
    int pos = stalls[0];

    for (int i = 1; i < stalls.size(); i++)
    {
        if (stalls[i] - pos >= mid)
        {
            cow++;
            pos = stalls[i]; // one more cow has been placed
        }
        if (cow == k)
            return true;
    }
    return false;
}

int solve(int n, int k, vector<int> stalls)
{

    sort(stalls.begin(), stalls.end());

    int start = 0;
    int end = stalls[stalls.size() - 1] - stalls[0];

    int ans = -1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (isPossibleSolution(stalls, k, mid))
        {
            ans = mid; // storing the possible ans 
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

int main()
{

    vector<int> stalls = {1, 2, 4, 8, 9};
    
    int n = stalls.size();
    int k = 3;

    int ans = solve(n, k, stalls);

    cout << ans;



    return 0;
}