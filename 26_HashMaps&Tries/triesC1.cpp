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

    TrieNode (char d) {
        this->data = d; 

        for(int i = 0; i < 26; i++) {
            children[i] = NULL; 
        }

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

int main() {

    TrieNode* root = new TrieNode('-'); 
    insertWord(root, "coding"); 
    insertWord(root, "code"); 
    insertWord(root, "coder"); 
    insertWord(root, "codehelp"); 
    insertWord(root, "baba"); 
    insertWord(root, "baby"); 
    insertWord(root, "babbar"); 

    cout << searchInTrieNode(root, "baba") << endl; 
    deleteTrieNode(root, "bobby"); 
    cout << searchInTrieNode(root, "bobby"); 

    return 0; 
}