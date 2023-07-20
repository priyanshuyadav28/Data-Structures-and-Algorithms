#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

// two pointor method o(N)
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


// binary search method 
int lowerBound(vector<int> arr, int x) {
    int start = 0;
    int end = arr.size() - 1;
    int ans = end;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] >= x)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (x > arr[mid])
        {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }

    }
    return ans;
    
}

vector<int> bs_method(vector<int> arr, int k, int x) {

    int h = lowerBound(arr, x);
    int l = h - 1;
    

    while (k--)
    {
        if (l < 0)
        {
            h++;
        }

        else if (h >= arr.size())
        {
            l--;
        }
        
        
        else if (x - arr[l] > arr[h] - x)
        {
            h++;
        } else {
            l--;
        }
        
    }
    return vector<int>(arr.begin() + l + 1, arr.begin() + h);
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5};

    int k = 4;
    int x = 3;

    



    return 0; 
}