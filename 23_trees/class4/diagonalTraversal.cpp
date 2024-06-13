#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 
#include <map>
#include <queue>

using namespace std;

class Node {
    public:
    int data; 
    Node* left; 
    Node* right; 

    Node(int data) {
        this->data = data; 
        left = NULL; 
        right = NULL; 
    }
};

Node* buildTree() {
    int data; 
    cout << "Enter the data"  << endl; 
    cin >> data; 

    if (data == -1) {
        return NULL; 
    }

    Node* root = new Node(data); 

    root->left = buildTree(); 
    root->right = buildTree(); 
}

void levelOrderTraversal(Node* root) {
    queue<Node*> q; 
    q.push(root);  
    q.push(NULL); 

    while (!q.empty())
    {
        Node* temp = q.front(); 
        q.pop(); 

        if (temp == NULL) {
            cout << endl; 

            if (!q.empty()) {
                q.push(NULL); 
            }
        }else {
            cout << temp->data << " ";

            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
    
    
}

void diagonalTraversal(Node* root, map<int, vector<int>>& mp, int hd) {
    if (root == NULL)
        return; 

    mp[hd].push_back(root->data); 

    diagonalTraversal(root->left, mp, hd + 1); 
    diagonalTraversal(root->right, mp, hd); 
}

void diagonalTraversalUsingLevelOrder(Node* root) {
    queue<Node*> q; 
    q.push(root); 

    while (!q.empty())
    {
        Node* temp = q.front(); 
        q.pop(); 

        while (temp != NULL)
        {
            cout << temp->data << endl; 

            if (temp->left) {
                q.push(temp->left); 
            }

            temp = temp->right; 
        }
    }
}

int main() {

    Node* root = buildTree(); 
    levelOrderTraversal(root); 

    map<int, vector<int>> ans; 
    int hd = 0; 

    diagonalTraversal(root, ans, hd);

    cout << "Diagonal Traversal:" << endl;

    for (const auto &pair : ans)
    {
        cout << "Key: " << pair.first << " Values: ";
        for (const auto &value : pair.second)
        {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0; 
}