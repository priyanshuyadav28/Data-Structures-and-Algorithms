#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;

bool checkPalindrome(string s, int start, int end)
{

    // int start = 0;
    // int end = s.length() - 1;

    while (start <= end)
    {
        if (s[start] == s[end])
        {
            start++;
            end--;
        }
        else
        {
            return false;
        }
    }

    return true;
}

bool validPalindrome(string s)
{

    int i = 0;
    int j = s.length() - 1;

    while (i <= j)
    {
        if (s[i] != s[j])
        {
            // remove i once and remove j once
            return checkPalindrome(s, i + 1, j) || checkPalindrome(s, i, j - 1);
        }
        else
        {
            // s[i] == s[j]
            i++;
            j--;
        }
    }
    return true;
}

int main()
{

    string s = "aba";
    cout << validPalindrome(s);

    return 0;
}