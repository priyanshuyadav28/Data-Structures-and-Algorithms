#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;

int towerOfHanoi(int n) {
    if (n == 0 || n == 1)
        return 1;

    return towerOfHanoi(n - 1) + towerOfHanoi(n - 2); 
    
}

void printArray(vector<int> &arr, int i) {
    if (i >= arr.size())
    {
        return; 
    }

    cout << arr[i] << " "; 

    printArray(arr, i + 1); 

}

int maxElement(vector<int>& arr, int i, int& max) {
    // base case 
    if (i >= arr.size())
        return max; 

    if (arr[i] > max)
    {
        max = arr[i]; 
    }

    return maxElement(arr, i + 1, max);

}


int minElement(vector<int>& arr, int i, int& min) {

    if (i >= arr.size())
        return min; 

    if (arr[i] < min)
    {
        min = arr[i]; 
    }

    return minElement(arr, i + 1, min); 

}


int positionOfElement(vector<int>& arr, int i, int& target) {

    if (i >= arr.size())
        return -1; 

    if (arr[i] == target)
        return i;

    return positionOfElement(arr, i + 1, target);    
    
}


void isCharPresent(string& str, int i, char key, vector<int>& chars) {
    if (i >= str.length())
        return; 

    if (str[i] == key)
    {
        // cout << i << " "; 
        chars.push_back(i); 
    }    

    isCharPresent(str, i + 1, key, chars);
}


int charCount(string& str, int i, char& key, int& count) {
    if (i >= str.size())
    {
        return count;
    }

    if (str[i] == key)
    {
        count += 1;
    }

    return charCount(str, i + 1, key, count);
    
    
}

void printDigits(int n) {
    if (n == 0)
    {
        return; 
    }

    cout << n % 10 << " "; 

    printDigits(n / 10); 
    
}


int main()
{   
    // int n = 3; 

    // int ans = towerOfHanoi(n); 

    // cout << ans; 

    vector<int> arr = {90, 10, 18, 21, 102, 5, 20, 30, 50, 16, 200}; 

    int i = 0; 

    // printArray(arr, i);

    // int max = INT32_MIN;  
    
    // cout << maxElement(arr, i, max); 

    // int min = INT32_MAX; 

    // cout << minElement(arr, i, min); 


    // int target = 21; 
    // int ans = positionOfElement(arr, i, target); 

    // cout << "The element " << target << " is at position " << ans << endl; 


    string str = "love babbar"; 
    char key = 'b';

    // vector<int> chars;

    // isCharPresent(str, i, key, chars); 

    // for (int i = 0; i < chars.size(); i++)
    // {
    //     cout << chars[i] << " "; 
    // }
    
    // int count = 0; 
    // cout << charCount(str, i, key, count);

    int num = 647; 
    printDigits(num); 
    





    return 0;
}