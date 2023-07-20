#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

static bool myComp(string a, string b) {
    string t1 = a + b;
    string t2 = b + a;

    return t1 > t2;
}

string largestNumber(vector<int> nums) {

    vector<string> snums;
    
    for (auto n : nums)
    {
        snums.push_back(to_string(n));
    }
    

    sort(snums.begin(), snums.end(), myComp);

    if (snums[0] == "0")  return "0";
    
    // convert the array in string
    string ans = "";
    for (auto str : snums) {
        ans += str;
    }

    return ans;

}

int main() {

    


    return 0; 
}