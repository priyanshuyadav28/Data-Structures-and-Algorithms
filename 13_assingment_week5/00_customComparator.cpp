#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm> 
#include <map>

using namespace std;


bool cmp(char first, char second) {
    
    return first > second;

}

bool descendingComparator(int num1, int num2) {
    return num1 > num2;
}



int main() {

    // string s = "babbar";
    // sort(s.begin(), s.end(), cmp);

    // cout << s << endl;

    // vector<int> v = {5, 2, 1, 4};

    // sort(v.begin(), v.end(), descendingComparator);

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " " ;
    // }

    
    map<int, char> myMap;

    myMap[0] = 'a';
    myMap[1] = 'b';
    myMap[2] = 'c';
    myMap[25] = 'z';

    cout << myMap[0] << endl;
    cout << myMap[1] << endl;
    cout << myMap[2] << endl;
    cout << myMap[25] << endl;
    
    // cout << myMap[21] << endl;



    return 0; 
}