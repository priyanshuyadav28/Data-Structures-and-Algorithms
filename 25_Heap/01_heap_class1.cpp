#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

class Heap {
    public: 
    int arr[101]; 
    int size; 

    Heap () {
        size = 0; 
    }

    void insert(int value) {
        // value insert at end
        size = size + 1; 
        int index = size; 
        arr[index] = value; 

        // place the value at its correct position 
        while (index > 1)
        {
            int parentIndex = index / 2; 

            if (arr[index] > arr[parentIndex]) {
                swap(arr[index], arr[parentIndex]); 
                index = parentIndex; 
            }
            else {
                break;
            }
        }

    }
}; 

int main() {

    Heap h; 
    h.arr[0] = -1; 
    h.arr[1] = 100; 
    h.arr[2] = 50; 
    h.arr[3] = 60; 
    h.arr[4] = 40; 
    h.arr[5] = 45;

    h.size = 5; 

    cout << "Printing Heap Before Insertion " << endl; 
    
    for(int i = 0; i <= h.size; i++) {
        cout << h.arr[i] << " "; 
    } cout << endl; 

    h.insert(110); 

    cout << "Printing after inserting in Heap " << endl; 

    cout << endl;

    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    cout << endl;

    return 0; 
}