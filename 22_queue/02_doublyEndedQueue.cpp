#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

class DeQueue {
    public: 
    int *arr; 
    int size; 
    int front; 
    int rear; 

    DeQueue (int size) {
        this->size = size; 
        arr = new int[size]; 
        front = -1; 
        rear = -1; 
    }

    void pushRear (int data) {
        // check queue is already full or not 
        if (front == 0 && rear == size - 1)
        {
            cout << "Queue is already full " << endl; 
        }
        // check for circular full  
        // inserting the first element 
        else if (front == -1)
        {
            front = 0; 
            rear = 0; 
            arr[rear] = data; 
        }
        // insert in circular case 
        else if (rear == size - 1 && front != 0)
        {
            rear = 0; 
            arr[rear] = data; 
        }
        // normal insertion
        else {
            rear++; 
            arr[rear] = data; 
        } 
    }

    void pushFront(int data) {
        if (front == 0 && rear == -1)
        {
            cout << "Queue is already full " << endl; 
        }
        else if (front == -1)
        {
            front = rear = 0; 
        }
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1; 
            arr[front] = data; 
        } else {
            front--; 
            arr[front] = data; 
        }
    }


    void popFront() {
        if (front == -1)
        {
            cout << "Queue is already empty" << endl; 
        } 
        else if (front == rear)
        {
            front = -1; 
        }
        else if (front == size - 1)
        {
            front = 0; 
        } else {
            front++; 
        }
    }

    void popRear () {
        if (front == -1 && rear == -1)
        {
            cout << "Queue is already empty " << endl; 
        } 
        else if (front == rear)
        {
            rear = -1; 
            front = -1; 
        }
        
        else if (rear == 0)
        {
            rear = size - 1; 
        } else {
            rear--; 
        }
    }

}; 

int main() {

    


    return 0; 
}