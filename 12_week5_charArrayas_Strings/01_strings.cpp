#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

int main() {

    //  string create
    // string str;
    
    // cout << "Enter the string " << endl;
    // getline(cin, str);
    // cin >> str;
    // str = "";

    // cout << str << endl;
    // cout << str.length() << endl;
    // cout << str.empty() << endl;
    
    // string str;

    // cout << "Enter the string " << endl;
    // cin >> str;

    // str.push_back('a');
    // cout  << str << endl;

    // str.pop_back();
    // cout << str << endl;

    // cout << str.substr(1, 3);  // important

    string str1 = "apple daily";
    // string str2 = "mango";
    // string str2 = "Apple";

    // if (str1.compare(str2) == 0)
    // {
    //     cout << "str1 and str2 are exactly same strings" << endl;
    // }
    // else {
    //     cout << "str1 and str2 are not same " << endl;
    // }

    // cout << str1.find("mam");


    // if (str1.find("mam") == std::string::npos)
    // {
    //     cout << "Not found" << endl;
    // } 

    // string str = "This is my First Message";
    // string word = "babbar";

    // str.replace(0, 4, word);
    // cout << str;

    string str = "This is an example sentence" ;

    str.erase(0, 4);
    cout << str;


    





    return 0; 
}