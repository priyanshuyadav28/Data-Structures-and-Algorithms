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
    Node* left; 
    Node* right;

    Node (int data) {
        this->data = data; 
        this->left = NULL; 
        this->right = NULL; 
    }
};

Node *insertIntoBST(Node* root, int data)
{
    if (root == NULL)
    {
        // this is the first node we have to create
        root = new Node(data);
        return root;  
    }
    // if root is not null that means it is not first node 
    // not first node 
    if (root->data > data) {
        root->left = insertIntoBST(root->left, data); 
    }
    else {
        root->right = insertIntoBST(root->right, data); 
    }

    return root; 
    
}

void takeInput(Node*& root) {
    int data; 
    cin >> data; 

    while (data != -1)
    {
        root = insertIntoBST(root, data); 
        cin >> data; 
    }
    
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
        }
        else {
            cout << temp->data << " ";

            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}

void preOrder(Node *root)
{
    // NLR
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node *root)
{
    // LRN
    if (root == NULL)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void inOrderTraversal(Node* root) {
    // LNR
    if (root == NULL)
    {
        return; 
    }

    inOrderTraversal(root->left); 
    cout << root->data << " "; 
    inOrderTraversal(root->right);   
}

bool findNodeInBST(Node* root, int target) {
    if (root == NULL) {
        return false; 
    }

    if(target == root->data) {
        return true; 
    }

    if (target > root->data) {
        return findNodeInBST(root->right, target); 
    }
    else {
        return findNodeInBST(root->left, target); 
    }

}

int minValueInBST(Node* root) {
    Node* temp = root; 

    if (temp == NULL) {
        return -1; 
    }

    while (temp->left)
    { 
        temp = temp->left; 
    }

    return temp->data;   
}

int maxValueInBST(Node* root) {
    Node* temp = root; 

    if (temp == NULL) {
        return -1; 
    }

    while (temp->right)
    {
        temp = temp->right; 
    }

    return temp->data;     
}

int main() {

    Node* root = NULL; 

    cout << "Enter the data for Node" << endl; 
    takeInput(root); 

    cout << "Printing BST: " << endl; 

    levelOrderTraversal(root); 

    // cout << "Searching in BST " << endl; 

    // bool found = findNodeInBST(root, 15); 
    // cout << found << endl; 

    int minElement = minValueInBST(root); 

    cout << "Min value in BST is " << minElement << endl; 

    int maxElement = maxValueInBST(root); 
    cout << "Max value in BST is " << maxElement << endl; 

    return 0; 
}