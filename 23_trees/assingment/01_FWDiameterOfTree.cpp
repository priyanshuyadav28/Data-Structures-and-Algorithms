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

int height(Node* root, int& d) {
    if (root == NULL) return; 

    int leftHeight = height(root->left, d); 
    int rightHeight = height(root->right, d); 

    int currD = leftHeight = rightHeight; 

    d = max(d, currD); 

    return max(leftHeight, rightHeight) + 1;  

}

int main() {

    int d = 0; 
    Node* root = buildTree(); 
    height(root, d); 

    return d; 

    return 0; 
}