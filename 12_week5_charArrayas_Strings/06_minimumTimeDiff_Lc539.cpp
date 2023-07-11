#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

int minimumTimeDifference(vector<string> s) {
    
}

int main() {

       string name = "23:59";
       int maxMinute = 60;

       string m = "60";
    //    int n = 60;
    //    cout << stoi(m);

       string timePoints[] = {"23:59", "00:00"};
       string ans = timePoints[0];
       cout << stoi(ans.substr(3, 5)) << endl;
       cout << timePoints[0];



    return 0; 
}