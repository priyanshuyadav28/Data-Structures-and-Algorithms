#include<iostream>
#include<vector>


using namespace std; 


bool isSortedAscending(vector<int>& arr, int i) {

    if (i >= arr.size())
    {
        return true;
    }

    if (arr[i] > arr[i + 1])
    {
        return false;
    }

    return isSortedAscending(arr, i + 1); 
    
}


int binarySearch(vector<int>& arr, int& target, int start, int end) {

    int mid = start + (end - start) / 2;

    if (start > end)
    {
        return -1;
    }

    if (target == arr[mid])
    {
        return mid;
    }
    

    if (target < arr[mid])
    {
        return binarySearch(arr, target, start, mid - 1);
    }
    
    if (target > arr[mid])
    {
        return binarySearch(arr, target, mid + 1, end); 
    }

}


void subsequence(string& str, string output, int i) {
    if (i >= str.length())
    {
        cout << output << endl;
        return;
    }

    // exlcude 
    subsequence(str, output, i + 1); 

    // include 
    output.push_back(str[i]); 
    subsequence(str, output, i + 1); 
    
}




int main() {
    
    // vector<int> arr = {2, 3, 4, 7, 8, 11, 15}; 
    // int i = 0; 

    // cout << isSortedAscending(arr, i) << endl;


    // vector<int> arr = {2, 3, 4, 6, 7, 15, 18, 22, 81, 90}; 

    // int start = 0; 
    // int end = arr.size() - 1;
    // int target = 90; 

    // cout << binarySearch(arr, target, start, end) << endl;

    string str = "abc"; 
    string output = ""; 
    int i = 0; 

    subsequence(str, output, i); 


    return 0; 
}