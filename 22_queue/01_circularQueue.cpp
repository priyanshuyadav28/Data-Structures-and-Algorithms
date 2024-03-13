#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

class CQueue {
    public: 
    int *arr; 
    int size; 
    int front; 
    int rear; 


    CQueue(int size) {
        this->size = size; 
        arr = new int[size]; 
        front = -1; 
        rear = -1; 
    }

    void push (int data) {
        // case 1. queue full 
        if (front == 0 && rear == size - 1)
        {
            cout << "Queue is full, cannot insert" << endl; 
        }
        else if (rear = front + 1)
        {
            cout << "Queue is full, cannot insert" << endl; 
        } 
        else if (front == -1) {
            //case 2: pushing the first element
            front = rear = 0; 
            arr[rear] = data; 
        }
        else if (rear == size -1 && front != 0)
        {
            //case 3: circular nature 
            rear = 0; 
            arr[rear] = data;             
        } else {
            // case 4: normal push
            rear++; 
            arr[rear] = data; 
        }  
    }

    void pop () {
        // check queue is not already empty 
        if (front == -1) {
            cout << "Queue is empty" << endl; 
        } 
        // case 2: single element case 
        else if (front == rear) {
            arr[front] = -1; 
            front = -1; 
            rear = -1; 
        }
        // case 3: circular nature 
        else if (front == size - 1)
        {
            front = 0; 
        } 
        // case 4: normal queue case 
        else {
            arr[front] = -1; 
            front++; 
        }

    }

    bool isEmpty() {
        if (front == rear && front != 0 && rear != 0) {
            return true; 
        }
        else {
            return false; 
        }
    }

}; 

int main() {

    CQueue q(5); 

    q.push(2); 
    q.push(4); 
    q.push(8); 


    return 0; 
}