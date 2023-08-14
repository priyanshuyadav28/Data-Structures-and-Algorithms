#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

void reverseString(string& str, int start, int end) {
   if (start > end)
   {
    return; 
   }

    // ek case solve kr do 
    swap(str[start], str[end]);


    // baaki recursion sambhal lega 
    reverseString(str, start + 1, end - 1);
   
    
}


int main() {

    string str =  "hello";
    int start = 0;
    int end = str.length() - 1;

    reverseString(str, start, end);
    
    cout << str;


    return 0; 
}