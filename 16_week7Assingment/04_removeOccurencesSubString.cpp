#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

void removeOccurenceRec(string& str, string& part) {
    // take the index of the part 
    int found =  str.find(part);

    if (found != string::npos)
    {
        // part string has been located 
        // please remove it 
        string left_part = str.substr(0, found);
        string right_part = str.substr(found + part.size(), str.size()); 

        str = left_part + right_part;


        removeOccurenceRec(str, part);
    } else {
        // base case 
        // all the occurences of part has been removed from str 
        return;
    }
    

}


int main() {

    string str = "daabcbaabcbc";
    string part = "abc";

    int i = 0;
    int j = 0;

    removeOccurenceRec(str, part);

    cout << str << endl;
   
    

    return 0; 
}