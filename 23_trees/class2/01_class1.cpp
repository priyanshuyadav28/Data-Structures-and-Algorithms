#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

class Node {
    public: 
    int data; 
    Node *left; 
    Node *right; 

    Node(int data) {
        this->data = data; 
        left = NULL; 
        right = NULL; 
    }
}; 

Node* buildTree() {
    int data; 

    cout << "Enter the data" << endl; 
    cin>> data;     

    Node *root = new Node(data); 

    if (data == -1) return NULL; 

    root->left = buildTree(); 
    root->right = buildTree(); 

    return root; 

}



int height(Node *root)
{
    if (root == NULL)
        return 0;

    int left = height(root->left);
    int right = height(root->right);
    int ans = max(left, right) + 1;

    return ans;
}

bool isBalanced(Node *root)
{
    if (root == NULL)
        return true;

    int leftSize = height(root->left);
    int rightSize = height(root->right);

    int diff = abs(leftSize - rightSize);

    bool ans1 = (diff <= 1);

    bool leftAns = isBalanced(root->left);
    bool rightAns = isBalanced(root->right);

    if (ans1 && leftAns && rightAns)
    {
        return true;
    }

    return false;
}


int sumTree(Node *root) {
    if (root == NULL) return 0;

    int leftSum = sumTree(root->left); 
    int rightSum = sumTree(root->right); 

    root->data += leftSum + rightSum; 

    return root->data; 
}



int main() {




    return 0; 
}