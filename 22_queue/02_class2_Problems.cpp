#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 
#include <queue> 
#include <stack> 
#include <deque> 

using namespace std;

void reverseQueue(queue<int> &q) {
    if (q.empty())
    {
        return; 
    }

    int currElement = q.front(); 
    q.pop(); 

    reverseQueue(q); 

    q.push(currElement); 
    
}


void reverseKElementInQueue(queue<int> &q, int k) {
    stack<int> st; 

    int count = 0; 
    int n = q.size(); 

    while (count < k)
    {
        st.push(q.front()); 
        q.pop(); 
        count++; 
    }

    while (!st.empty())
    {
        q.push(st.top()); 
        st.pop(); 
    }

    count = 0; 

    while (count < n - k)
    {
        int temp = q.front(); 
        q.pop(); 

        q.push(temp); 
        count++; 
    }   
}


queue<int> interLeaveFirstHalfInSecond(queue<int> &q) {
    stack<int> s1;
    stack<int> s2;

    int n = q.size();
    int mid = n / 2;

    int c1 = 0;
    while (c1 < mid)
    {
        s1.push(q.front());
        q.pop();
        c1++;
    }

    while (!q.empty())
    {
        s2.push(q.front());
        q.pop();
    }

    while (!s2.empty() || !s1.empty())
    {
        if (!s2.empty())
        {
            q.push(s2.top());
            s2.pop();
        }
        if (!s1.empty())
        {
            q.push(s1.top());
            s1.pop();
        }
    }

    // now reverse the queue
    reverseQueue(q); 

    return q;
}

int main() {

    queue<int> q; 

    q.push(3); 
    q.push(6); 
    q.push(9); 
    q.push(12); 
    q.push(15);

    // cout << q.front() << endl;

    // reverseQueue(q); 

    // cout << q.front() << endl; 

    cout << q.front() << endl; 

    reverseKElementInQueue(q, 3); 

    // cout << q.front() << endl; 
    
    while (!q.empty())
    {
        cout << q.front() << " "; 
        q.pop(); 
    }
    

    return 0; 
}