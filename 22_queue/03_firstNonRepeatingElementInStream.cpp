#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 
#include <queue> 
#include <map> 

using namespace std;

string firstNotRepeatingElement(string &str) {
    queue<char> q;
    int freq[25] = {0};

    string ans = ""; 

    for(int i = 0; i < str.size(); i++) {
        // take out the current char 
        char ch = str[i]; 

        // increase the cound of the current char 
        freq[ch - 'a']++;
        q.push(ch);  

        while (!q.empty())
        {
            if (freq[q.front() - 'a'] > 1) {
                q.pop(); 
            } else {
                ans.push_back(q.front()); 
                break; 
            }
        }

        if (q.empty())
        {
            ans.push_back('#');
        }
    }

    return ans; 

}

    int main()
{

    string str = "aabc"; 

    cout << firstNotRepeatingElement(str) << endl;  
        


    return 0;
}