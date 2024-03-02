#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 
#include <stack>

using namespace std;

class Stack {
    public: 
    int *arr; 
    int size; 
    int top1; 
    int top2; 

    Stack (int size) {
        arr = new int[size]; 
        this->size = size; 
        top1 = -1; 
        top2 = size; 
    }

    void push1(int data) {
        if (top2 - top1 == 1) {
            cout << "Stack overflow" << endl; 
        } else {
            top1++; 
            arr[top1] = data; 
        }        
    }

    void pop1() {
        if (top1 == -1)
        {
            cout << "stack underflow" << endl; 
        } else {
            top1--; 
        }
        
    }
    
    void push2(int data) {
        if (top2 - top1 == 1)
        {
            cout << "stack overflow" << endl; 
        } else {
            top2--; 
            arr[top2] = data; 
        }
        
    }

    void pop2() {
        if (top2 == size)
        {
            cout << "stack underflow" << endl; 
        } else {
            top2++; 
        }
        
    }


}; 




void getMidElementInStack(stack<int> &s, int totalSize) {

    if (totalSize == 0)
    {
        cout << "stack empty " << endl; 
        return; 
    }
    
    if (s.size() == (totalSize / 2) + 1)
    {
        cout << "Mid element is " << s.top() << endl; 
        return; 
    }

    int temp = s.top(); 
    s.pop(); 

    getMidElementInStack(s, totalSize); 

    s.push(temp); 
}



int main() {

    // Reversing a string using stack 
    // string str = "babbar"; 

    // stack<char> s; 
    
    // for(int i = 0; i < str.size(); i++) {
    //     s.push(str[i]); 
    // }

    // cout << s.size() << endl;

    // string rev = "";  

    // while (!s.empty())
    // {
    //     rev.push_back(s.top());  
    //     s.pop(); 
    // }

    // cout << rev << endl; 

    // cout << s.size() << endl; 


    // find mid element in stack 
    stack<int> s; 
    s.push(10); 
    s.push(20); 
    s.push(30); 
    s.push(40); 
    s.push(50); 
    s.push(60); 
    s.push(70); 

    int originalSize = s.size(); 
    cout << originalSize << endl; 

    getMidElementInStack(s, originalSize); 

    cout << originalSize << endl; 



    return 0; 
}