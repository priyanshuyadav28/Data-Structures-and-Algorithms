#include <iostream>
#include <vector>

using namespace std;

// 1. selection sort 
int minElement(vector<int> arr, int startIndex, int endIndex) {

    // int minimumElement = arr[startIndex];
    int minimumElement = startIndex;
    // int index = startIndex;

    for (int i = startIndex; i < endIndex; i++)
    {
        if (arr[i] < arr[minimumElement])
        {
            minimumElement = i;
            // index = i;
        }
        
    }

    return minimumElement;
}


void selectionSort(vector<int> arr) {

    for (int i = 0; i < arr.size() - 1; i++)
    {
        int minEleIndex = minElement(arr, i, arr.size());
        swap(arr[i], arr[minEleIndex]);
    }

    for (int i = 0; i < arr.size(); i++)    
    {
        cout << arr[i] << " " ;
    }
    
    
}


// Bubble Sort
void bubbleSort(vector<int> arr) {
    
    bool swapped = false;
    for (int i = 1; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size() - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped = true;
                swap(arr[j], arr[j + 1]);
            }
            
        }
        // Optimization of bubble sort 
        if (swapped == false)
        {
            break;
        }

    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    
  
}

// insertion sort 
void insertionSort(vector<int> arr) {
    // outer loop for rounds 
    for (int rounds = 1; rounds < arr.size(); rounds++)
    {
        // step 1. fetch the element
        int val = arr[rounds];

        // step 2. compare
        int j = rounds - 1;
        for (; j >= 0; j--)
        {
            // condition and shift the element
            if (arr[j] > val) 
            {
                // step 3. shift
                arr[j + 1] = arr[j];
            }
            else {
                // stop  
                break;
            }
            
        }

        // step 4 copy 
        arr[j + 1] = val;
        
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    
    
}

int main() {
    // there are many algorithms to sort the elements in an array 
    // 1. Selection Sort -> max element swap
    // vector<int> arr = {5, 10, 3, 2, 1, 8};
    // selectionSort(arr);

    // vector<int> arr = {4, 2, 1,99, 8, 9, 7, 10};
    // bubbleSort(arr);

    vector<int> arr = {10, 1, 7, 6, 14, 9};
    insertionSort(arr);

    




    return 0;
}