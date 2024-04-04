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

    Node(int data) {
        this->data = data; 
        left = NULL; 
        right = NULL; 
    }
}; 

Node* buildTree() {
    int data; 
    cout << "Enter the data " << endl; 
    cin>> data; 

    if (data == -1) {
        return NULL; 
    }

    Node* root = new Node(data); 

    root->left = buildTree(); 
    root->right = buildTree(); 

    return root; 
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;

    // initially
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;

            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
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


int findPosition(int inOrder[], int size, int element) {
    for(int i = 0; i < size; i++) {
        if (inOrder[i] == element) {
            return i; 
        }
    }
    return -1; 
}

Node* treeUsingInorderPreOrder (int inOrder[], int preOrder[], int size, int& preIndex, int inOrderStart, int inOrderEnd) {

    // base case
    if (preIndex >= size || inOrderStart > inOrderEnd)
    {
        return NULL;
    }

    // solve for one case 
    int element = preOrder[preIndex++];

    Node* root = new Node(element); 

    // hw implement this using map
    int pos = findPosition(inOrder, size, element); 

    // left case
    root->left = treeUsingInorderPreOrder(inOrder, preOrder, size, preIndex, inOrderStart, pos - 1); 

    // right case 
    root->right = treeUsingInorderPreOrder(inOrder, preOrder, size, preIndex, pos + 1, inOrderEnd); 

    return root; 
}

int main() {

    int inorder[] = {40, 20, 50, 10, 60, 30, 70}; 
    int preorder[] = {10, 20, 40, 50, 30, 60, 70}; 

    int size = 7; 
    int preIndex = 0; 
    int inOrderStart = 0; 
    int inOrderEnd = size - 1; 

    Node* root = NULL; 
    root = treeUsingInorderPreOrder(inorder, preorder, size, preIndex, inOrderStart, inOrderEnd); 

    cout << "Printing level order traversal " << endl; 
    levelOrderTraversal(root); 


    return 0;
}