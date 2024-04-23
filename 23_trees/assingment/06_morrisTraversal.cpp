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


// morris traversal 
vector<int> morrisTraversal(Node* root) {
    vector<int> ans; 
    Node* curr = root; 

    while (curr)
    {
        // case 1. if curr left = null store curr->val and 
        // move towards curr->right
        if (curr->left == nullptr) {
            ans.push_back(curr->data); 
            curr = curr->right; 
        }
        else { // when curr left != null then 
            // find predecessor: predecessor can be found by going once in curr->left and then going curr->right until curr rights reaches null  
            Node* pred = curr->left; 
            while (pred->right)
            {
                pred = pred->right; 
            }
            
            // check if the pred->right is null then establish a connection from pred's right to the current node for comming back 
            // and then move curr to its left for further processing 
            if (pred->right == nullptr) {
                pred->right = curr; 
                curr = curr->left; 
            }
            else { // if pred's right is not null that means it is already visited and the connection has been already made
                    // in that case removet the connection, store the curr->val and move curr to curr->right
                pred->right = nullptr; 
                ans.push_back(curr->data); 
                curr = curr->right; 
            }

        }
    }
    
    return ans; 

}

int main() {

    
    


    return 0; 
}