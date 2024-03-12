#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

class Queue {
    public:
    int size; 
    int front; 
    int rear; 
    int *arr; 

    Queue(int size) {
        this->size = size; 
        arr = new int[size]; 
        front = 0; 
        rear = 0; 
    }

    ~Queue() {
        delete[] arr; 
    }

    void push(int val) {
        if (rear == size) {
            cout << "Queue is full" << endl; 
        } else  {
            arr[rear] = val;
            rear++;
        }
    }

    void pop() {
        if (front == rear) {
            cout << "Queue is Empty !" << endl;
        } else {
            arr[front] = -1; 
            front++; 

            if (front == rear) {
                front = 0;
                rear = 0;
            }
        }
    }

    int getFront() {
        if (front == rear) {
            cout << "Queue is empty !" << endl; 
        } else {
            return arr[front]; 
        }
    }

    bool isEmpty() {
        if (front == rear) {
            return true; 
        } else {
            return false; 
        }
    }

    int getSize() {
        return rear - front; 
    }

}; 


int main() {

    Queue q(5); 

    q.push(21); 
    q.push(2); 
    q.push(3); 
    q.push(5); 
    q.push(50); 
    

    cout << q.getFront() << endl; 

    q.pop();  

    cout << q.getFront() << endl; 

    cout << q.isEmpty() << endl; 

    cout << q.getSize() << endl; 

    return 0; 
}