#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

class TrieNode {
    public:
    char data; 
    TrieNode* children[26]; 
    bool isTerminal; 
    int childCount; 

    TrieNode (char d) {
        this->data = d; 

        for(int i = 0; i < 26; i++) {
            children[i] = NULL; 
        }
        childCount = 0; 
        this->isTerminal = false;
    }   
}; 

void insertWord(TrieNode* root, string word) {
    // base case 
    if (word.length() == 0) {
        root->isTerminal = true; 
        return; 
    }

    char ch = word[0]; 
    int index = ch - 'a'; 

    TrieNode* child; 

    if (root->children[index] != NULL) {
        child = root->children[index]; 
    }
    else {
        child = new TrieNode(ch); 
        root->childCount++; 
        root->children[index] = child; 
    }

    insertWord(child, word.substr(1)); 
}

bool searchInTrieNode(TrieNode* root, string word) {
    // base case 
    if (word.length() == 0) {
        return root->isTerminal; 
    }

    char ch = word[0]; 
    int index = ch - 'a'; 

    TrieNode* child; 

    if (root->children[index] != NULL) {
        child = root->children[index]; 
        return searchInTrieNode(child, word.substr(1)); 
    }

    return false; 
}


void deleteTrieNode(TrieNode* root, string word) {
    // base case 
    if (word.length() == 0) {
        root->isTerminal = false; 
        return; 
    }

    char ch = word[0]; 
    int index = ch - 'a'; 

    TrieNode* child; 

    if (root->children[index] != NULL) {
        child = root->children[index]; 
        deleteTrieNode(child, word.substr(1)); 
    }
    else {
        cout << "invalid input " << endl; 
        return;  
    }
}

string longestPrefixInString(vector<string> arr) {
    string ans = ""; 
    bool isMatched = true; 

    for (int i = 0; i < arr[0].size(); i++) {
        char ch = arr[0][i]; 

        for(int j = 1; j < arr.size(); j++) {
            if (arr[j][i] != ch) {
                isMatched = false; 
                break; 
            }
        }
        if (isMatched)
        {
            ans.push_back(ch);
        }
        else {
            break;
        }       

    }

    return ans; 
}

// using trie 
void lognestCommonPrefix(string first, string& ans, TrieNode* root) {
    if (root->isTerminal)
        return; 
        
    for(int i = 0; i < first.length(); i++) {
        char ch = first[i]; 

        if (root->childCount == 1) {
            ans.push_back(ch); 
            int index = ch - 'a'; 
            root = root->children[index]; 
        }
        else {
            break;
        }
        if (root->isTerminal) {
            break;
        }
    }
}


void storeSuggestion(TrieNode* curr, vector<string>& temp, string& prefix) {
    if (curr->isTerminal) {
        temp.push_back(prefix); 
    }

    // a to z choice 

    for(char ch = 'a'; ch <= 'z'; ch++) {
        int index = ch - 'a'; 
        TrieNode* next = curr->children[index]; 

        if (next != NULL) {
            prefix.push_back(ch);   
            storeSuggestion(next, temp, prefix);
            prefix.pop_back();  
        }
    }


}


vector<vector<string>> getSuggestions(TrieNode* root, string str) {
    
    TrieNode* prev = root; 
    vector<vector<string>> ans; 
    string prefix = ""; 

    for(int i = 0; i < str.length(); i++) {
        char ch = str[i]; 
        int index = ch - 'a';

        TrieNode* curr = prev->children[index]; 
        if (curr == NULL) {
            break;
        }
        else {
            vector<string> temp; 
            prefix.push_back(ch); 

            storeSuggestion(curr, temp, prefix); 
            
            ans.push_back(temp); 
            prev = curr; 
        }
    }
    return ans; 
}



int main() {

    vector<string> v; 
    v.push_back("love");
    v.push_back("lover");
    v.push_back("loving");
    v.push_back("last");
    v.push_back("lost");
    v.push_back("lane");
    v.push_back("lord");
    
    string input = "lovi"; 

    TrieNode* root = new TrieNode('-'); 

    for(int i = 0; i < v.size(); i++) {
        insertWord(root, v[i]); 
    }

    vector<vector<string>> ans = getSuggestions(root, input); 

    cout << "Printing Suggestion " << endl; 

    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " "; 
        }
        cout << endl; 
    }


    // longest common prefix using trie
    // vector<string> arr = {"code", "coder", "coding", "codehelp"};
    // TrieNode* root = new TrieNode('-'); 

    // for(int i = 0; i < arr.size(); i++) {
    //     insertWord(root, arr[i]); 
    // }   

    // string ans = ""; 
    // string first = arr[0]; 
    // lognestCommonPrefix(first, ans, root);  

    // cout << ans << endl; 



    // TrieNode* root = new TrieNode('-'); 
    // insertWord(root, "coding"); 
    // insertWord(root, "code"); 
    // insertWord(root, "coder"); 
    // insertWord(root, "codehelp"); 
    // insertWord(root, "baba"); 
    // insertWord(root, "baby"); 
    // insertWord(root, "babbar"); 

    // cout << searchInTrieNode(root, "baba") << endl; 
    // deleteTrieNode(root, "bobby"); 
    // cout << searchInTrieNode(root, "bobby"); 

    // vector<string> arr = {"code", "coder", "coding", "codehelp"}; 
    
    // string ans = longestPrefixInString(arr); 

    // cout << ans << endl; 




    return 0; 
}