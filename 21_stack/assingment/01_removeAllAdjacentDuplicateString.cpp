#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 
#include <stack> 

using namespace std;

string removeDuplicateString(string &s) {

    stack<char> st; 
    string ans = "";     

    for(int i = 0; i < s.size(); i++) {
        if (st.empty()) st.push(s[i]); 

        else if (s[i] == st.top())
        {
            st.pop(); 
        } else {
            st.push(s[i]); 
        }
        
    }

    while (!st.empty())
    {
        ans += st.top(); 
        st.pop(); 
    }
    
    reverse(ans.begin(), ans.end()); 
    return ans; 
}


int main() {

    // string s = "abbaca";
    string s = "azxxzy";

    cout << removeDuplicateString(s) << endl; 
    

    return 0; 
}