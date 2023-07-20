#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;


string removeAllOccurences(string s, string part)
{
    int pos = s.find(part);
    
    while (pos != string::npos)
    {
        s.erase(pos, part.length());
        pos = s.find(part);
    }
    return s;
    
}

int main()
{

    string s = "daabcbaabcbc";
    string part = "abc";

    string ans = removeAllOccurences(s, part);

    cout << ans;

    return 0;
}