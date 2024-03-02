#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

bool isValid(string s)
{
    stack<char> st;

    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else
        {
            if (!st.empty())
            {
                char topCh = st.top();
                char currCh = s[i];
                if (topCh == '(' && ch == ')')
                {
                    st.pop();
                }
                else if (topCh == '{' && ch == '}')
                {
                    st.pop();
                }
                else if (topCh == '[' && ch == ']')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }

    if (st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string str = "({)"; 

    cout << isValid(str) << endl; 

    
    return 0;
}