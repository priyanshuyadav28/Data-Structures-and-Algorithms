#include<iostream>

using namespace std;

void moveNegativeLeft(int arr[], int n) {

    int low = 0;
    int start = 0;

    while (low < n)
    {
       if (arr[low] < 0)
       {
        swap(arr[low], arr[start]);
        low++;
        start++;
       }

       else {
        low++;
       }
       
    }  
}

void moveNegativeLeft_2(int arr[], int n) {
    int l = 0 ;
    int h = n - 1;

    while (l < h)
    {
        if (arr[l] < 0)
        {
            l++;
        }
        else if (arr[h] > 0)
        {
            h--;
        }
        else {
            swap(arr[l], arr[h]);
        } 
    }
    
}


int main() {

    int arr[] = {1, 3, -4, -2, 2, 6};

    int n = sizeof(arr) / sizeof(int);
    // cout << n;

    // moveNegativeLeft(arr, n); // mine 
    moveNegativeLeft_2(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }






    return 0;
}