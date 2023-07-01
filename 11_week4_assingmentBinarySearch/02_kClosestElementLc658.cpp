#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

vector<int> kClosetElement(vector<int> arr, int k , int x) {

    sort(arr.begin(), arr.end());

    vector<int> ans;

    int l = 0;
    int h = arr.size() - 1;

    while (h - l >= k)
    {
        if (x - arr[l] >  arr[h] - x)
        {
            l++;
        }
        else {
            h--;
        }
        
    }

    for (int i = l; i <= h; i++)
    {
        ans.push_back(arr[i]);
    }
    
    return ans;
}


int main() {

    vector<int> arr = {1, 2, 3, 4, 5};

    int k = 4;
    int x = 3;

    



    return 0; 
}