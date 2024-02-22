#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

inline void ShowNumber(int n) {
    cout << n << endl; 
}

int main() {

    // An inline function is a regular function that is defined by the inline keyword. 
    // The code for inline function is inserted directly into the code of the calling function by compiler while compiling which result in faster execution and less overhead(by not creating function call in stack) compared to regular function call 


    ShowNumber(10); 
    ShowNumber(10); 
    ShowNumber(10); 
    ShowNumber(10); 
    ShowNumber(10); 
    ShowNumber(10); 

    return 0; 
}