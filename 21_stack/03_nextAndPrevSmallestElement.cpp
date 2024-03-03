#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

void nextSmallestElement(vector<int> &v, stack<int> &st, vector<int> &ans)
{
  

    for (int i = v.size() - 1; i >= 0; i--)
    {
        // find the current element
        int currElement = v[i];

        while (st.top() >= currElement)
        {
            st.pop();
        }

        // now the element in stack is less than the curr ele
        ans[i] = st.top();

        st.push(currElement);
    }
}


void prevSmallestElement(vector<int> &v, stack<int> &st, vector<int> &ans) {

    for(int i = 0; i < v.size(); i++) {
        int currElement = v[i]; 

        while (st.top() >= currElement)
        {
            st.pop(); 
        }

        // when element in stack is < currElement
        ans[i] = st.top();

        st.push(currElement);
    }

}



int main() {

    vector<int> v; 

    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);

    stack<int> st; 
    st.push(-1);

    vector<int> ans(v.size());

    // nextSmallestElement(v, st, ans); 

    prevSmallestElement(v, st, ans); 

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " "; 
    }   
    cout << endl; 
    
    return 0; 
}