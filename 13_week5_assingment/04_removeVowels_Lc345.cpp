#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

bool isVowel(char s) {
    s = tolower(s);

    return s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u';

}

string swapVowelsOfString(string s) {

    int start = 0;
    int end = s.length() - 1;

    while (start < end)
    {
        if (isVowel(s[start]) && isVowel(s[end]))
        {
            swap(s[start], s[end]);
            start++;
            end--;
        }
        else if (isVowel(s[start]) == 0)
        {
            start++;
        }
        
        else {
            end --;
        }   
    }
    
    return s;
}


int main() {

      string s = "hello";
      
      cout << swapVowelsOfString(s) << endl;
    


    return 0; 
}