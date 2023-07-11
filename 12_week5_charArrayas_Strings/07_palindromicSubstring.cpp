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

int main() {  

    string s = "hello";

    string check = s.substr(1, 2);  
    cout << check;

    cout << isPalindrome(check) << endl;
    
    

    return 0; 
}