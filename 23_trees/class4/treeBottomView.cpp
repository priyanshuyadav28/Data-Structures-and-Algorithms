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

    Node *root = new Node(data);

    root->left = buildTree();
    root->right = buildTree();

    return root;
}

void levelOrderTraversal(Node *root)
{
    if (root == NULL)
        return;

    queue<Node*> q; 
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


void bootomViewPrint(Node* root) {
    // base case
    if (root == NULL)
        return;

    map<int, int> topNode;

    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));

    while (!q.empty())
    {
        pair<Node *, int> temp = q.front();
        q.pop();

        Node *frontNode = temp.first;
        int hd = temp.second;

        topNode[hd] = frontNode->data;


        if (frontNode->left)
        {
            q.push(make_pair(frontNode->left, hd - 1));
        }
        if (frontNode->right)
        {
            q.push(make_pair(frontNode->right, hd + 1));
        }
    }

    // now the answer required is stored in the map
    cout << "Printing the answer" << endl;
    for (auto i : topNode)
    {
        cout << i.first << " " << i.second << endl;
    }
}


int main() {

    Node* root = NULL; 
    root = buildTree(); 

    bootomViewPrint(root); 


    return 0; 
}