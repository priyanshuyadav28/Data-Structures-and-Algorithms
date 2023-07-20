#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

// brute force method : O(nlogn)
bool isValidAnagram(string s, string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if (s == t)
    {
        /* code */
        return true;
    }

    return false;
    
} 


// optimized method 
bool isAnagram(string s, string t) {

    int freqTable[256] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        freqTable[s[i]]++;
    }

    for (int i = 0; i < s.length(); i++)
    {
        freqTable[t[i]]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if (freqTable[i] != 0)
        {
            return false;
        }
        
    }
    
    return true;

}



int main() {

    string s = "anagram";
    string t = "nagrmaa";

    // bool ans = isValidAnagram(s, t);

    // cout << ans;

    cout << isAnagram(s, t) << endl;

    


    return 0; 
}