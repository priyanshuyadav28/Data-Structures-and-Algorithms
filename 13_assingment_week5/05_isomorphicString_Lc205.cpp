#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm> 

bool isIsomosphic(string s, string t) {
    int hash[256] = {0};  // mapping of each char of language 's' to language 't'
    bool istcharsMapped[256] = {0}; // stores if t[i] char already mapped with s[i]. 

    for (int i = 0; i < s.size(); i++)
    {
        if (hash[s[i]] == 0 && istcharsMapped[t[i]] == 0)
        {
            hash[s[i]] = t[i];   
            istcharsMapped[t[i]] = true;
        }
        
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (char(hash[s[i]]) != t[i])
        {
            return false;
        }
        
    }


    return true;
    
    

    
    
    
}

using namespace std;

int main() {


    


    return 0; 
}    