#include<iostream>
#include<vector>

using namespace std;

void printArray(vector<int> arr) {
     for (int i = 0; i < arr.size(); i++)
    {
       cout << arr[i] << " ";
    }
}


void CountsortColors(vector<int> arr) {

    // count method 

    int zeroes = 0;
    int ones = 0;
    int twos = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            zeroes++;
        }
        
        else if (arr[i] == 1)
        {
            ones++;
        }
        
        else {
            twos++;
        }
        
    }

    int i = 0;

    while (zeroes--)
    {
        arr[i] = 0;
        i++;
    }

    while (ones--)
    {
        arr[i] = 1;
        i++;
    }

    while (twos--)
    {
        arr[i] = 2;
        i++;
    }    
   
    printArray(arr);


}


void inPlaceSortColors(vector<int> arr) {

    int s = 0;
    int m = 0;
    int e = 0;

    while (m <= e)
    {
        if (arr[m] == 0)
        {
            swap(arr[s], arr[s]);
            
            s++;
            m++;
        }

        else if (arr[m] == 1)
        {
            m++;
        }

        else {
             // arr[m] == 2
             swap(arr[m], arr[e]);
             e--;
        }
        
        
    }

    printArray(arr);
}

int main() {

    vector<int> arr = {2, 0, 2, 1, 1, 0};

    // CountsortColors(arr);
    inPlaceSortColors(arr);

    


    return 0;
}