#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

void solveKeypad(vector<string> &ans, vector<string> &keypad, string digits, int index, string &output)
{
    // base case
    if (index >= digits.length())
    {
        ans.push_back(output);
        return;
    }

    int currentDigit = digits[index] - '0';
    string value = keypad[currentDigit];

    // solve for one case
    for (int i = 0; i < value.length(); i++)
    {
        char charAtKey = value[i];
        output.push_back(charAtKey);
        solveKeypad(ans, keypad, digits, index + 1, output);
        output.pop_back();
    }
}

int main()
{
    vector<string> keypad(10);
    keypad[2] = "abc";
    keypad[3] = "def";
    keypad[4] = "ghi";
    keypad[5] = "jkl";
    keypad[6] = "mno";
    keypad[7] = "pqrs";
    keypad[8] = "tuv";
    keypad[9] = "wxyz";

    string digits = "23";

    vector<string> ans;
    int index = 0;
    string output = "";

    solveKeypad(ans, keypad, digits, index, output);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}