#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

class TreeNode
{
public: 
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data)
    {
        this->val = data; 
        left = NULL; 
        right = NULL;
    }
};

bool isSame = true;
void solve(TreeNode *p, TreeNode *q, bool& isSame)
{
    if (p == NULL && q == NULL)
        return;

    if (p == NULL && q != NULL)
    {
        isSame = false;
        return;
    }

    if (p != NULL && q == NULL)
    {
        isSame = false;
        return;
    }

    if (p->val != q->val)
    {
        isSame = false;
        return;
    }

    solve(p->left, q->left, isSame);
    solve(p->right, q->right, isSame);
}

int main() {

    

    return 0; 
}