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


    void deleteNode() {
        // replace the root node with the last node element
        arr[1] = arr[size]; 
        size--; 

        // replace root element at correct position 
        int index = 1; 

        while (index < size)
        {
            int left = 2 * index; 
            int right = 2 * index + 1; 

            int largest = index; 
            
            if (left < size && arr[largest] < arr[left]) {
                largest = left; 
            }
            if (right < size && arr[largest] < arr[right]) {
                largest = right;
            }

            if (largest == index) {
                break;
            }
            else {
                swap(arr[index], arr[largest]); 
                index = largest;  
            }

        } 
    }

};

void heapify(int arr[], int n, int i) {
    int index = i; 
    int leftIndex = 2 * index; 
    int rightIndex = 2 * index + 1; 
    
    int largest = index; 

    if (leftIndex <= n && arr[leftIndex] > arr[largest]) {
        largest = leftIndex; 
    }
    if (rightIndex <= n && arr[rightIndex] > arr[largest]) {
        largest = rightIndex; 
    }

    if (largest != index) {
        swap(arr[largest], arr[index]); 
        index = largest; 
        heapify(arr, n, index); 
    }
}

void buildHeap(int arr[], int n)
{

    for(int i = n / 2; i > 0; i--) {
        heapify(arr, n, i); 
    }
}

void heapSort(int arr[], int n) {
    int index = n; 

    while (n != 1)
    {   
        swap(arr[1], arr[index]);
        index--;
        n--;  
        heapify(arr, n, 1); 
    } 
    
}


int main() {

    // Heap h; 
    // h.arr[0] = -1; 
    // h.arr[1] = 100; 
    // h.arr[2] = 50; 
    // h.arr[3] = 60; 
    // h.arr[4] = 40; 
    // h.arr[5] = 45;

    // h.size = 5; 

    // cout << "Printing Heap Before Insertion " << endl; 
    
    // for(int i = 0; i <= h.size; i++) {
    //     cout << h.arr[i] << " "; 
    // } cout << endl; 

    // h.insert(110); 

    // cout << "Printing after inserting in Heap " << endl; 

    // cout << endl;

    // for (int i = 0; i <= h.size; i++)
    // {
    //     cout << h.arr[i] << " ";
    // }
    // cout << endl;


    int arr[] = {-1, 12, 56, 43, 6, 78, 87, 5, 44, 3, 23, 32}; 
    int n = 11; 

    buildHeap(arr, n); 

    cout << "Printing the heap " << endl;

    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl; 

    cout << "Printing Heap after sorting " << endl; 
    heapSort(arr, n);

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0; 
}