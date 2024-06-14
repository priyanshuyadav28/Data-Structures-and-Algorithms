#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

class Node {
    public:
    int data; 
    Node* left; 
    Node* right; 

    Node (int data) {
        this->data = data; 
        left = NULL; 
        right = NULL; 
    }
}; 

int sumTree(Node* root) {
    // base case
    if (root == NULL)
    {
        return 0; 
    }

    // leaf node -> replace the current value with 0 and return the replaced value
    if (!root->left && !root->right) {
        int temp = root->data; 
        root->data = 0; 

        return temp; 
    }
    
    // call left and right side of the tree
    int leftSum = sumTree(root->left);
    int rightSum = sumTree(root->right);

    // store the current value at the node and replace it with left + right
    int currTempVal = root->data;
    root->data = leftSum + rightSum;

    // return the sum of currTempVal(the previously stored value) and the current value
    return currTempVal + root->data; 

}

int main() {

    


    return 0; 
}