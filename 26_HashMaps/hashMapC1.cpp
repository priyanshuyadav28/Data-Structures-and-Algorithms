#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 
#include <unordered_map>

using namespace std;



int main() {

    unordered_map<string, int> m; 

    // insertion 
    // pair<string, int> p = make_pair("scorpio", 9); 
    // m.insert(p); 

    // pair<string, int> p2("alto", 2); 
    // m.insert(p2); 

    // m["fortuner"] = 10; 

    // cout << m.at("alto") << endl; 
    // cout << m["scorpio"] << endl; 

    // searching 
    // cout << m.count("scorpio") << endl; 
    // cout << m.count("innova") << endl; 

    // if (m.find("fortuner") != m.end()) {
    //     cout << "exist" << endl; 
    // } 

    // if (m.find("indigo") == m.end()) {
    //     cout << "do not exist" << endl; 
    // }

    // cout << m.size() << endl; 
    

    // iterate on map 

    // cout << "Printing all entries " << endl; 
    
    // cout << endl; 

    // cout << m["hummer"] << endl; 

    // for (auto i : m) {
    //     cout << i.first << " -> " << i.second << endl;  
    // }


    // count each character's occurence in a string 
    unordered_map<char, int> charCount; 

    string str = "thiruvananthapuram"; 

    for(int i = 0; i < str.length(); i++) {
        char ch = str[i]; 
        charCount[ch]++; 
    }

    for (auto i : charCount) {
        cout << i.first << " -> " << i.second << endl; 
    }

    // check linked list is circular or not 
    




    return 0; 
}