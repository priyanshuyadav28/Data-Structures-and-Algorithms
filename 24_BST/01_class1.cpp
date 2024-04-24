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

Node *insertIntoBST(Node *root, int data)
{
    if (root == NULL)
    {
        // the root is empty and we have to create the root
        root = new Node(data);
        return root; 
    }

    if (data < root->data)
    {
        // left call
        root->left = insertIntoBST(root->left, data);
    }
    else
    {
        root->right = insertIntoBST(root->right, data);
    }

    return root;
}

void takeInput(Node* &root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

void levelOrderTraversal(Node *root)
{
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


void preOrderTraversal(Node* root) {
    if (root == NULL) 
        return; 

    cout << root->data << " "; 
    preOrderTraversal(root->left); 
    preOrderTraversal(root->right); 
}

void inOrderTraversal(Node *root)
{
    if (root == NULL)
        return;

    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node *root)
{
    if (root == NULL)
        return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}






int main()
{

    Node *root = NULL;
    cout << "Enter the data" << endl;
    takeInput(root);

    cout << "Printing the Tree " << endl; 
    levelOrderTraversal(root); 
    cout << endl; 

    cout << "Pre order Traversal" << endl; 
    preOrderTraversal(root); 

    cout << endl; 

    cout << "Inorder Traversal" << endl; 
    inOrderTraversal(root); 
    cout << endl; 

    cout << "Post order Traversal" << endl; 
    postOrderTraversal(root); 


    return 0;
}