#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm> 
#include <map> 

using namespace std;


string intToRoman(int num) {
    // required romans to build int
    string romanSymbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    // values of the romans to be subtracted from the converted part
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    string ans = "";

    for (int i = 0; i < 13; i++)
    {
        while (num >= values[i])
        {
            ans += romanSymbols[i];
            num -= values[i];
        }
        
    }


    return ans;

}


int main() {

    cout << intToRoman(67) << endl;

    return 0; 
}