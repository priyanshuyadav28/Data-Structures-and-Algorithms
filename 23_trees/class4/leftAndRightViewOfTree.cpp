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

    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);

    root->left = buildTree();
    root->right = buildTree();

    return root;
}

void levelOrderTraversal(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
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


void leftView(Node* root, int level, vector<int>& leftNode) {
    if (root == NULL) return; 

    if (level == leftNode.size())
    {
        leftNode.push_back(root->data); 
    }

    leftView(root->left, level + 1, leftNode); 
    leftView(root->right, level + 1, leftNode); 
}

void rightView(Node* root, int level, vector<int>& leftNode) {
    if (root == NULL) return; 

    if (level == leftNode.size())
    {
        leftNode.push_back(root->data); 
    }

    // first right call 
    leftView(root->right, level + 1, leftNode); 

    // then left call 
    leftView(root->left, level + 1, leftNode); 
}

int main() {

    Node* root = buildTree(); 

    levelOrderTraversal(root); 

    vector<int> leafNode;

    leftView(root, 0, leafNode); 

    for(int i = 0; i < leafNode.size(); i++) {
        cout << leafNode[i] << " ";         
    }

    return 0; 
}