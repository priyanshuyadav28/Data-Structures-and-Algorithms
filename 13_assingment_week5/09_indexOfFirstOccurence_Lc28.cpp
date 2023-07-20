#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

int firstOccurenceIndex(string haystack, string needle) {

    int n = haystack.size();
    int m = needle.size();

    for (int i = 0; i <= n - m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (needle[j] != haystack[i + j])
            {
                break;
            }
            if (j == m - 1)
            {
                return i;
            }
            
            
        }
        
    }

    return -1;
 
}


int main() {

    string haystack = "sadbutsad";
    string needle = "sad";
    // int ans = -1;

    // using stl find method. 
    // ans =  haystack.find(needle);
    // cout << ans;
    


    return 0; 
}