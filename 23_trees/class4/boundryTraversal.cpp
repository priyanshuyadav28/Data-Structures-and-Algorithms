#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// 90 11 -1 -1 13 -1 -1 50 -1 -1
Node *buildTree()
{

    int data;
    cout << "Enter the data" << endl;
    cin >> data;

    if (data == -1)
    {
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

void leftBoundary(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return;
    }

    cout << root->data << " ";

    if (root->left)
    {
        leftBoundary(root->left);
    }
    else
    {
        leftBoundary(root->right);
    }
}

void leafNode(Node *root)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
    {
        cout << root->data << " ";
    }

    leafNode(root->left);
    leafNode(root->right);
}

void rightBoundary(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return;
    }
    
    if (root->right) leftBoundary(root->right);
    if (root->left) leftBoundary(root->left);

    cout << root->data << " ";
}

void boundaryTraversal(Node *root)
{
    if (root == NULL)
        return;

    // print the root node / handle it alag se 
    cout << root->data << " "; 

    // left boundary print
    leftBoundary(root->left);

    // leaf node print
    leafNode(root);

    // right boundary print
    rightBoundary(root->right);
}

int main()
{
    Node* root = buildTree(); 

    boundaryTraversal(root); 
    return 0;
}