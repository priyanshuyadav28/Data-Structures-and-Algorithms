#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

class Stack {
    public: 
    int *arr; 
    int top; 
    int size;   

    Stack(int size) {
        arr = new int[size]; 
        this->size = size; 
        this->top = -1; 
    }

    // functions 
    void push(int data) {
        if(size - top > 1) {
            // space available 
            // insert 
            top++; 
            arr[top] = data; 
        } else {
            // space is not available 
            cout << "Stack Overflow " << endl; 
        }
    }

    void pop() {
        if (top == -1) {
        // stack is empty 
        cout << "Stack underflow" << endl; 
        } else {
            // stack is not empty 
            top--;
        }
    }

    int getTop() {
        if(top == -1) {
            cout << "stack empty" << endl; 
        } else {
            return arr[top];  
        }
    }

    // number of valid elements present in stack 
    int getSize() {
        return top + 1; 
    }

    bool isEmpty() {
        if(top == -1) {
            return true; 
        } else {
            return false; 
        }
    }


}; 


int main() {
    

    Stack s(4); 
    s.push(10); 
    s.push(20); 
    s.push(30); 
    s.push(40); 






    return 0; 
}