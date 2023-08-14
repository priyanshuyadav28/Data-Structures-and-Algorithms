#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

void subsequence(string str, string output, int i) {
    if (i >= str.length())
    {
        cout << output << endl;
        return;
    }

    // exclude case
    subsequence(str, output, i + 1);

    // include case 
    output.push_back(str[i]);
    subsequence(str, output, i + 1);    
    
}


int main() {

    string str = "abc";
    int i = 0;
    int size = str.size();  
    string output = "";


    subsequence(str, output, i);



    return 0; 
}