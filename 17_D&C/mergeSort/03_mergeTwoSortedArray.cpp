#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

void mergeSorted(int arr1[], int arr2[], int n1, int n2) {
    int i = 0;
    int j = 0;

    int* merged = new int[n1 + n2];
    int index = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr1[i] = merged[index];
            i++;
            index++;
        } else {
            arr2[j] = merged[index];
            j++;
            index++;
        }
        
    }

    for (int i = 0; i < (n1 + n2); i++)
    {
        cout << merged[i] << endl;
    }
    
    
    
}

int main() {

    int arr1[] = {1, 2, 5, 6};
    int arr2[] = {8, 10};

    int sizeOne = 4;
    int sizeTwo = 2;

    mergeSorted(arr1, arr2, sizeOne, sizeTwo);


    return 0; 
}