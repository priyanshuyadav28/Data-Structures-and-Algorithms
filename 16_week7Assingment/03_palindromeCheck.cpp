#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(string &str, int &start, int &end)
{
    if (start >= end)
    {
        return true;
    }

    // ek case solve kr do

    if (str[start] == str[end])
    {
        start += 1;
        end -= 1;

        // baaki recursion sambhal lega
        return isPalindrome(str, start, end);
    }
    else {
        return false;
    }
}

int main()
{
    string str = "racecar";
    int start = 0;
    int end = str.length() - 1;

    bool ans = isPalindrome(str, start, end);

    cout << ans << endl;

    return 0;
}