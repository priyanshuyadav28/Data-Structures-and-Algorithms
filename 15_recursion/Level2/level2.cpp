#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

void printArray(int arr[], int size) {

    if (size < 0)
    {
        return;
    }

    printArray(arr, size - 1);
    cout << arr[size] << " ";
}
 
int maxElement(int arr[], int size, int i, int max) {
    // base condition 
    if (i > size)
    {
        return max;
    }

    // check wheather the current element arr[i] > min if yes 
    // assign min to arr[i]
    if (arr[i] > max)
    {
     max = arr[i];
    }

    return maxElement(arr, size, i + 1, max); 
}

void printMaxElement(int arr[], int size, int i, int& max) {
    if (i > size)
    {
        return;
    }

    if (arr[i] > max)
    {
        /* code */
     max = arr[i];
    }

    printMaxElement(arr, size, i + 1, max); 
}


void printMin(int arr[], int size, int i, int &min) {
    if (i > size)
    {   
        cout << min << endl;
        return;
    }

    if (arr[i] < min)
    {
        /* code */
     min = arr[i];
    }

    printMin(arr, size, i + 1, min); 
}


void findInString(string str, char key, int i) {

    if (i >= str.length())
    {   
        cout << "Not Present" << endl;
        return;
    }

    if (str[i] == key)
    {
        cout << "present" << endl;
        return;
    }

    findInString(str, key, i + 1);
    
}


bool findInString2(string str, char key, int i) {

    if (i >= str.length())   
        return false;

    if (str[i] == key)
        return true;

    return findInString2(str, key, i + 1);
}

void digits(int n) {
   
   if (n == 0)
   {
        return;
   }

   digits(n / 10);

   cout << n %10 << " ";

    
    
     
}





int main() {

    // int arr[] = {10, 20, 30, 40, 50};
    // int arrSize = sizeof(arr) / sizeof(int);
    
    // cout << arrSize << endl;

    // printArray(arr, arrSize - 1);


    // int arr2[] = {2, 9, 12, 27, 89, 5, 4};
    // int sizeOfarr2 = sizeof(arr2) / sizeof(int);

    // int index = 0;
    // int max = INT32_MIN;

    // cout << maxElement(arr2, sizeOfarr2, index, max);

    // cout << max << endl;

    // printMaxElement(arr2, sizeOfarr2, index, max);

    // cout << max << endl;

    // int arr3[] = {2, 9, 8, 43, 89, 93, 5};
    // int i3 = 0;
    // int min = INT32_MAX;

    // printMin(arr3, sizeOfarr2, i3, min);

    // string str = "lovebabbar";

    // char key = 'm';
    // int i = 0;

    // findInString(str, key, i);
    // cout << findInString2(str, key, i) << endl;


    int num = 0647;
    int num2 = 076;
    int index = 0;

    // digits(num);
    // cout << digits(num) << endl;
    cout << num << " " << num2 << endl;



    return 0; 
}