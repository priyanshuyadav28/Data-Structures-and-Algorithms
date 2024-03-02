#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 
#include <stack>

using namespace std;

void insertInSortedStack(stack<int> &st, int target) {
    // base case    
    if (st.empty()) {
        // if stack is empty in first fn call
        st.push(target); 
        return; 
    }

    if (st.top() >= target)
    {
        st.push(target);
        return; 
    }

    int temp = st.top(); 
    st.pop(); 

    insertInSortedStack(st, target); 

    st.push(temp); 

}


void sortStack(stack<int> &st) {
    if (st.empty())
    {
        return; 
    }

    int topElement = st.top(); 
    st.pop(); 

    sortStack(st); 

    insertInSortedStack(st, topElement); 
    
}


int main() {

    // question 1 -> insert element in already sorted stack
    stack<int> st; 

    st.push(5); 
    st.push(2); 
    st.push(6); 
    st.push(14); 
    st.push(21);

    // insertInSortedStack(st, 5); 

    sortStack(st); 

    while (!st.empty())
    {
        cout << st.top() << " "; 
        st.pop(); 
    }

    cout << endl; 
    


    return 0; 
}