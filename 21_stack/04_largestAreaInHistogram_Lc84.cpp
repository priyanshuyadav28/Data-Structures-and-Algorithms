#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 
#include <stack>

using namespace std;

vector<int> previousElement(vector<int> &heights) {
    stack<int> st; 
    st.push(-1); 

    vector<int> ans(heights.size()); 

    for(int i = 0; i < heights.size(); i++) {
        int currElement = heights[i]; 

        while (st.top() != -1 && heights[st.top()] >= currElement)
        {
            st.pop(); 
        }

        ans[i] = (st.top()); 

        st.push(i); 
    }

    return ans; 
}

vector<int> nextElement(vector<int> &heights) {
    stack<int> st;
    st.push(-1);

    vector<int> ans(heights.size());

    for (int i = heights.size() - 1; i >= 0; i--)
    {
        int currElement = heights[i];

        while (st.top() != -1 && heights[st.top()] >= currElement)
        {
            st.pop();
        }

        ans[i] = st.top(); 

        st.push(i);
    }

    return ans;
}


int maxHistogramArea(vector<int> &height) {
    vector<int> prev = previousElement(height); 
    vector<int> next = nextElement(height); 

    int maxArea = INT32_MIN; 

    for(int i = 0; i < height.size(); i++) {
        int length = height[i]; 

        if (next[i] == -1) {
            next[i] = height.size(); 
        }

        int widht = next[i] - prev[i] - 1;

        int area = length * widht;

        maxArea = max(maxArea, area); 
    }
    return maxArea; 
}

int main() {

    vector<int> v; 
    v.push_back(2); 
    v.push_back(1); 
    v.push_back(5); 
    v.push_back(6); 
    v.push_back(2); 
    v.push_back(3); 

    cout << "max area is : " << maxHistogramArea(v) << endl; 


    return 0; 
}