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

Node *buildTree()
{
    int data;

    cout << "Enter the data" << endl;
    cin >> data;

    Node *root = new Node(data);

    if (data == -1)
        return NULL;

    root->left = buildTree();
    root->right = buildTree();

    return root;
}

void leverOrderTraversal(Node *root)
{
    queue<Node *> q;

    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *tempNode = q.front();
        q.pop();

        if (tempNode == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << tempNode->data << " ";

            if (tempNode->left)
            {
                q.push(tempNode->left);
            }
            if (tempNode->right)
            {
                q.push(tempNode->right);
            }
        }
    }
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

int sumTree(Node *root)
{
    // base case
    if (root == NULL)
        return 0;

    int currentRootData = root->data;
    int leftData = sumTree(root->left);
    int rightData = sumTree(root->right);

    root->data += leftData + rightData;

    return root->data;
}

int main()
{

    Node *root = NULL;

    root = buildTree();
    leverOrderTraversal(root);

    cout << "Printing after sum Tree" << endl; 

    sumTree(root);
    leverOrderTraversal(root);

    return 0;
}