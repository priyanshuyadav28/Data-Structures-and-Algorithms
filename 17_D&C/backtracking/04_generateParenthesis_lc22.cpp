#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;

void solve(vector<string> &ans, int n, int open, int close, string output)
{
    if (open == 0 && close == 0)
    {
        ans.push_back(output);
        return;
    }

    // add open bracket and check it is availabe or not
    if (open > 0)
    {
        output.push_back('(');
        solve(ans, n, open - 1, close, output);

        // backtrack
        output.pop_back();
    }

    if (close > open)
    {
        output.push_back(')');
        solve(ans, n, open, close - 1, output);

        output.pop_back();
    }
}

int main()
{
    int n = 3;
    vector<string> ans;

    int open = n;
    int close = n;

    string output = "";

    solve(ans, n, open, close, output);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << ", "; 
    }

    return 0; 
}