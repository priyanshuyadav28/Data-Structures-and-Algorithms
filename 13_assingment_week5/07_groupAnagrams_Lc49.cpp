#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

vector<vector<string>> groupAnagram(vector<string> strs)
{
    map<string, vector<string> > mp;

    for(auto str: strs) {
        string s = str;
        sort(s.begin(), s.end());
        mp[s].push_back(str);
    }

    vector<vector<string>> ans;

    for(auto it = mp.begin(); it != mp.end(); it++) {
        ans.push_back(it -> second);
    }

    return ans;

}

int main()
{

    // map in c++ stl
    // map<string, int> m;
    // m["one"] = 1;
    // m["two"] = 2;
    // m["three"] = 3;

    // cout << m["three"];

    return 0;
}