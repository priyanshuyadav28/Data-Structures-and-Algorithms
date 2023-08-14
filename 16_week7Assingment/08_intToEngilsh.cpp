#include <iostream>
#include <vector>
#include<utility>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

string numberToWords(int num, vector<pair<int, string>>& mp) {

    if (num == 0)
    {
        return "Zero";
    }
    
    for(auto it : mp) {
        if (num >= it.first)
        {
            string a = "";

            if (num >= 100){ // because how much hundread or greater than that it required only in >100 situation
                a = numberToWords(num / it.first, mp) + " ";
            } 

            string b = it.second;

            string c = "";
            if (num % it.first != 0)
            {
                c = " " + numberToWords(num % it.first, mp);
            }

            return a + b + c;
            
        }
        
    } 
    return "";
}

int main() {

     vector<pair<int, string>> mp = {
        {10000000, "Billion"}, {1000000, "Million"}, {1000, "Thousand"}, {100, "Hundred"}, {90, "Ninety"}, {80, "Eighty"}, {70, "Seventy"}, {60, "Sixty"}, {50, "Fifty"}, {40, "Forty"}, {30, "Thirty"}, {20,"Twenty"},
        {19, "Nineteen"}, {18, "Eighteen"}, {17, "Seventeen"}, {16, "Sixteen"}, {15, "Fifteen"}, {14, "Fourteen"}, {13, "Thirteen"}, {12, "Twelve"}, {11, "Eleven"}, {10, "Ten"}, {9, "Nine"}, {8, "Eight"}, {7, "Seven"}, {6, "Six"}, {5, "Five"}, {4, "Four"}, {3, "Three"}, {2, "Two"}, {1, "One"}
        };
    

    return 0; 
}