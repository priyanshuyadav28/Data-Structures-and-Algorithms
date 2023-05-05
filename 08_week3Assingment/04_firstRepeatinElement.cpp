#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

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

int main() {
    
    vector<int> arr {1, 5, 3, 4, 3, 5, 6};

    int ans = firstRepeating(arr);
    cout << ans;


    return 0;
}