#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;

string convert(string s, int numRows)
{
    if (numRows == 1)
        return s;

    vector<string> zigZag(numRows);

    int row = 0;
    int i = 0;
    bool direction = 1; // for T-> B

    while (true)
    {
        if (direction)
        {
            while (row < numRows && i < s.size())
            {
                zigZag[row++].push_back(s[i++]);
            }
            // after adding top to botton now set row at    middle
            row = numRows - 2;
        }
        else
        { // when direction = 0 then B-> T
            while (row >= 0 && i < s.size())
            {
                zigZag[row--].push_back(s[i++]);
            }
            row = 1;
        }

        if (i >= s.size())
            break;
        direction = !direction;
    }

    string ans = "";
    for (int i = 0; i < zigZag.size(); i++)
    {
        ans += zigZag[i];
    }

    return ans;
}

int main()
{

    

    return 0;
}