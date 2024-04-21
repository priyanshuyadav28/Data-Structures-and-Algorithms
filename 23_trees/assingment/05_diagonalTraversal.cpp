#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 
#include <queue>
#include <map>

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

// naive approach 
void diagonalTraversal(Node* root,int mark, map<int, vector<int>>& dTraverse) {
    if (root == NULL) {
        return; 
    }

    diagonalTraversal(root->right, mark , dTraverse); 
    diagonalTraversal(root->left, mark + 1, dTraverse); 

    dTraverse[mark].push_back(root->data); 

}

// good approach
vector<int> diagonal(Node *root)
{
    // your code here
    vector<int> ans;

    if (!root)
        return ans;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        while (temp)
        {
            ans.push_back(temp->data);

            if (temp->left)
            {
                q.push(temp->left);
            }
            temp = temp->right;
        }
    }
    return ans;
}

int main() {

    map < int, vector<int>> dTraverse;
    int mark = 0;

    // 8 2 1 -1 -1 5 4 -1 -1 7 -1 -1 6 -1 10 -1 14 13 -1 -1 -1 -1
    Node* root = buildTree(); 

    diagonalTraversal(root, mark, dTraverse);

    for (auto const &pair : dTraverse)
    {
        int level = pair.first;
        vector<int> nodes = pair.second;

        // Output nodes at the current diagonal level
        cout << "Diagonal level " << level << ": ";
        for (int nodeData : nodes)
        {
            cout << nodeData << " ";
        }
        cout << endl;
    }

    return 0; 
}