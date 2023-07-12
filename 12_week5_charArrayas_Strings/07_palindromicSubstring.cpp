#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

bool isPalindrome(string s) {
    int i = 0;
    int j = s.length() - 1;

    while (i <= j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else {
            return false;
        }
        
    }
    return true;
}

int subString(string s) {

    // string  helper = "";
    int i = 0;
    string emptyStr1 = "";
    string emptyStr2 = "";
    int count = s.length();
    // int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i + 1; j < s.length(); j++)
        {
            if (isPalindrome(s.substr(i, j + 1)))
            {
                count = count + 1;
            }
        }
        
    }
    
    return count;  
    
}

// optimised solution with O(n^2)
 int expandAroundIndex(string s, int i, int j) {
        int count = 0;

        while(i >= 0 && j < s.length() && s[i] == s[j]) {
            count++;
            i--;
            j++;
        }
        return count;
    }


    int countSubstrings(string s) {
       int count = 0;
       int n = s.length();

       for(int i = 0; i < n; i++) {
           // odd 
           int oddAns  = expandAroundIndex(s, i, i);
           count = count + oddAns;

           // even
           int evenAns = expandAroundIndex(s, i, i + 1);
           count += evenAns;
       }

       return count;

    }

int main() {  

    string s = "hello";

    cout << countSubstrings(s) << endl;
    
    

    return 0; 
}