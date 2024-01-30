#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;

int climbStairs(int n)
{
    // base case
    if (n == 0 || n == 1)
        return 1;

    // return statement
    return climbStairs(n - 1) + climbStairs(n - 2);
}

void printArrayElement(int arr[], int size, int i)
{
    if (i >= size)
    {
        return;
    }

    // ek case solve kr diya
    cout << arr[i] << " ";

    // baaki recursion sambhal lega
    printArrayElement(arr, size, i + 1);
}

int findMaxElement(int arr[], int size, int i, int &max)
{

    if (i >= size)
    {
        return max;
    }

    if (arr[i] > max)
    {
        max = arr[i];
    }

    i += 1;

    return findMaxElement(arr, size, i, max);
}

int findMinInArray(int arr[], int size, int i, int min)
{

    if (i >= size)
    {
        return min;
    }

    if (arr[i] < min)
    {
        min = arr[i];
    }

    i += 1;

    return findMinInArray(arr, size, i, min);
}

bool isPresent(string str, int index, int size, char key)
{

    if (index == size)
    {
        return false;
    }

    if (key == str[index])
    {
        return true;
    }
    
    index += 1;

    return isPresent(str, index, size, key);
}

void printDigits(int num) {
    if (num == 0)
    {
        return;
    }

    printDigits(num / 10);
    
    cout << num % 10; 
}



int main()
{
    // recursion basic level 2

    // mandatory thing in recursion
    // 1. base case
    // 2. recursive relation
    // 3. return statement

    // optional case
    // processing part

    // Magical line in Recursion
    // Ek case solve kar do, baaki recursion sambhal lega

    // climbing stairs problem
    // int n = 5;
    // int totalSteps = climbStairs(n);

    // cout << totalSteps << endl;

    // printing elements of array with recursion
    // int arr[] = {10, 20, 30, 40, 50};
    // int i = 0;

    // printArrayElement(arr, 5, i);

    // finding maximum element in array using recursion
    // int arr[] = {2, 1, 8, 20, 18, 57, 33, 5};
    // int size = 8;

    // int i = 0;
    // int max = INT32_MIN;
    // int min = INT32_MAX;

    // // int ans = findMaxElement(arr, size, i, max);
    // int ans = findMinInArray(arr, size, i, min);

    // cout << ans;

    // find key in string
    // string str = "helloji";
    // int index = 0;
    // int size = str.size();
    // char key = 'l';

    // bool ans = isPresent(str, index, size, key);
    
    // cout << ans << endl;

    

    // print all digits of a number 
    int num = 647;
    printDigits(num);
    






    return 0;
}