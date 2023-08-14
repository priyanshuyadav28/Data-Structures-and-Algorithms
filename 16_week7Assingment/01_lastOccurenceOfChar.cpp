#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

// searching left to right 
int lastOccurenceOfChar(string& str, int i, int& pos, char& x) {
    // base case 
    if (i >= str.length())
    {
        return pos;
    }

    // if ans found
    if (str[i] == x)
    {
        pos = i;
    }

    // function call 
    return lastOccurenceOfChar(str, i + 1, pos, x);
  
}

// search from right 
int searchForCharRTL(string& str, int i, int& pos, char& x) {

    if (i < 0)
    {
        return pos;
    }
    

    if (str[i] == x)
    {
        pos = i;
        return pos;
    }

    return searchForCharRTL(str, i - 1, pos, x);
    
}

// use stl function strrchr()

int main() {

    string str = "abcddedg";

    int i = 0; // initial index 
    char x = 'g'; 
    int pos = -1; // initial position 

    // int ans = lastOccurenceOfChar(str, i, pos, x);
    
    // cout << ans;

    cout << searchForCharRTL(str, str.length(), pos, x); // searching right to left

    

    return 0; 
}