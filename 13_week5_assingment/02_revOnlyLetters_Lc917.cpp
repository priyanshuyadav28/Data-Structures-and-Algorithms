#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;

// O(n)
bool isChar(char c)
{

    if ((int(c) >= 65 && int(c) <= 90) || (int(c) >= 97 && int(c) <= 122))
    {
        return true;
    }

    // if (int(c) >= 65 && int(c) <= 90)
    // {
    //     return true;
    // }

    // else if (int(c) >= 97 && int(c) <= 122)
    // {
    //     return true;
    // }

    return false;
}

string reverseOnlyLetter(string s)
{
    int i = 0;
    int j = s.length() - 1;

    while (i < j)
    {
        if (isChar(s[i]) && isChar(s[j]))
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }

        else if (isChar(s[i]) == 0)
        {
            i++;
        }

        else if (isChar(s[j]) == 0)
        {
            j--;
        }
    }

    return s;
}

int main()
{

    string s = "a-bC-dEf-ghIj";

    cout << reverseOnlyLetter(s) << endl;

    return 0;
}