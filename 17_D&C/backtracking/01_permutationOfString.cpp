#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

void permutationOfString(string& str, int i) {
    if (i >= str.length())
    {
        cout << str << " ";
        return;
    }

    for (int j = i; j < str.length(); j++)
    {
        swap(str[i], str[j]);
        permutationOfString(str, i + 1);
        // backtracking why ? 
        swap(str[i], str[j]); 
    }
    
    
}

int main() {

    string str = "abc";
    int i = 0;

    permutationOfString(str, i);


    return 0; 
}