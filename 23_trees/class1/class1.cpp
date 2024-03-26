#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 
#include <queue> 


using namespace std;

class Node {
    public: 
    int data; 
    Node *left; 
    Node *right; 

    Node (int data) {
        this->data = data; 
        left = NULL; 
        right = NULL; 
    }
}; 

// 90 11 -1 -1 13 -1 -1 50 -1 -1
Node *buildTree() {

    int data; 
    cout << "Enter the data" << endl; 
    cin>> data; 

    if (data == -1) {
        return NULL; 
    }

    // step 1
    Node *root = new Node(data); 

    // step 2
    root->left = buildTree(); 

    // step 3 
    root->right = buildTree(); 

    return root; 
}   


void levelOrderTraversal(Node *root) {
    queue<Node*> q; 

    // initially 
    q.push(root); 
    q.push(NULL); 

    while (!q.empty())
    {
        Node* temp = q.front(); 
        q.pop(); 
        
        if (temp == NULL) {
            cout << endl; 

            if(!q.empty()) {
                q.push(NULL); 
            }
        } 
        else {
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
        
    }
    
}

// INORDER -> LNR (left Node Right)
void InOrderTraversal(Node *root) {
    if (root == NULL) return; 

    // LNR
    InOrderTraversal(root->left);

    // N: print current node data 
    cout << root->data << " "; 

    // R
    InOrderTraversal(root->right);
}

// PREORDER -> NLR
void preOrderTraversal(Node *root) {
    if (root == NULL) return; 

    cout << root->data << " "; 

    preOrderTraversal(root->left); 
    preOrderTraversal(root->right); 
}

// LRN (left Right Node)
void postOrderTraversal(Node *root)
{
    if (root == NULL)
        return;

    // LRN
    postOrderTraversal(root->left);

    // R
    postOrderTraversal(root->right);

    // N: print current node data
    cout << root->data << " ";
}

int maxDepth(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int left = maxDepth(root->left);
    int right = maxDepth(root->right);

    int ans = max(left, right) + 1;
    return ans;
}


int diameterOfTree(Node *root) {
    if (root == NULL) return 0; 

    int op1 = diameterOfTree(root->left); 
    int op2 = diameterOfTree(root->right); 

    int op3 = maxDepth(root->left) + maxDepth(root->right); 

    int ans = max(op1, max(op2, op3)); 
    
    return ans; 
}



int main() {

    Node *root = NULL; 
    
    root = buildTree(); 
    
    cout << endl; 

    cout << "Printing the Tree in level order traversal" << endl; 

    levelOrderTraversal(root); 


    return 0; 
}