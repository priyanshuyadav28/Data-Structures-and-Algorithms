#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

// navie approach O(n^2)
int findFirstRepeating(vector<int> arr) {

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                return i + 1;
            }
            
        }
        
    }    

    return -1;
    
}

// optimised method
int firstRepeating(vector<int> arr) {

     unordered_map<int, int> hash;

    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]]++ ;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (hash[arr[i]] > 0)
        {
            return i + 1;
        }
        
    }
    
    return -1;
 
}   


// creating our own hash

int findMissing3(vector<int> arr) {

    int hash[arr.size()] = {0};

    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 0; i < arr.size(); i++)
    {
       if (hash[i] > 0)
       {
        return i + 1;
       }
       
    }

    return -1;
 
}

int main() {
    
    vector<int> arr {1, 5, 3, 4, 3, 5, 6};

    // int ans = firstRepeating(arr);
    // cout << ans;

    // cout << findFirstRepeating(arr);

    cout << findMissing3(arr);


    return 0;
}