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

Node* BstUsingInOrder(int inOrder[], int start, int end) {
    if (start > end) {
        return NULL; 
    }
    int mid = start + (end - start) / 2; 
    int data = inOrder[mid]; 

    Node* root = new Node(data); 

    root->left = BstUsingInOrder(inOrder, start, mid - 1); 
    root->right = BstUsingInOrder(inOrder, mid + 1, end); 

    return root; 
}

int main()
{
    Node* root = NULL; 
    int inOrder = {}; 
    int size = 5; 

    return 0;
}