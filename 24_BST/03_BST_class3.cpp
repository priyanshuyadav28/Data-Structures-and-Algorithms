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

Node *insertIntoBST(Node *root, int data)
{
    if (root == NULL)
    {
        // this is the first node we have to create
        root = new Node(data);
        return root;
    }
    // if root is not null that means it is not first node
    // not first node
    if (root->data > data)
    {
        root->left = insertIntoBST(root->left, data);
    }
    else
    {
        root->right = insertIntoBST(root->right, data);
    }

    return root;
}

void takeInput(Node *&root)
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

void printLL(Node* head) {
    Node* temp = head; 
    
    while (temp != NULL)
    {
        cout << temp->data << " "; 
        temp = temp->right; 
    }
    cout << endl; 
    
}

void bstToSortedDLL(Node* root, Node*& head) {
    if (root == NULL)
        return; 
    
    bstToSortedDLL(root->right, head); 

    root->right = head; 

    if (head != NULL) {
        head->left = root; 
    }

    head = root; 

    bstToSortedDLL(root->left, head); 
}

int main() {

    Node* root = NULL;
    cout << "Enter the value for the tree" << endl; 
    takeInput(root); 

    cout << "Print Tree " << endl; 
    levelOrderTraversal(root); 

    Node* head = NULL; 
    bstToSortedDLL(root, head); 
    
    cout << "Printing root after converting in LL" << endl; 
    printLL(head); 

    


    return 0; 
}