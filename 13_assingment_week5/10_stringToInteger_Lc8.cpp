#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

int myAtoi(string s) {

    int num = 0;
    int i = 0;
    int sign = 1; // positive 

    // 1. removing spaces 
    while (s[i] == ' ')
    {
        i++;
    }

    // 2. determining sign 
    if (i < s.size() && (s[i] ==  '-') || s[i] == '+')
    {
        sign = s[i] == '+' ? 1 : -1;
        ++i;
    }

    // 3. do not consider char and strings
    while (i < s.size() && isdigit(s[i]))
    {
        if (num > INT32_MAX / 10 || (num == INT32_MAX / 10) && s[i] > '7')
        {
            return sign == -1 ? INT32_MIN : INT32_MAX;
        }
 
        
        num = num * 10  + (s[i] - '0');  
        ++i;
    }
    
    return num * sign;
    

}


int main() {

    


    return 0; 
}