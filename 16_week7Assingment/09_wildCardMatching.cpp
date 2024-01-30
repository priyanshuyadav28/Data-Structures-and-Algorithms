#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

bool isMatch(string& s, int si, string& p, int pi) {
    // base 
    if (si == s.size() && pi == p.size())
    {
        return true;
    }

    if (si == s.size() && pi < p.size())
    {
        while (pi < p.size())
        {
            if (p[pi] != '*')
            {   
                return false;
            }
            pi++;  
        }
     return true;
        
    }
    
    

    // single char matching 
    if (s[si] == p[pi] || '?' == p[pi])   
    {
        return isMatch(s, si + 1, p, pi + 1);
    }

    // when p[pi] = *

    if (p[pi] == '*') {
        // case 1 -> treat * as empty or null
        bool caseA = isMatch(s, si, p, pi + 1);
        
        // case2 -> let * consume one char 
        bool caseB = isMatch(s, si + 1, p, pi);

        return caseA || caseB;
    }
    
    return false; // char dosent match

}

int main() {


    int si = 0; // pointer index for s string 
    int pi = 0; // pointer index for pattern string 
    
    


    return 0; 
}