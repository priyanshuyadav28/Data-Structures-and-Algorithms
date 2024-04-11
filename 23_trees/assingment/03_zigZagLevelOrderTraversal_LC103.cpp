#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 
#include <queue>

using namespace std;

class TreeNode {
    public: 
    int val; 
    TreeNode* left; 
    TreeNode* right; 

    TreeNode(int val) {
        this->val = val; 
        left = NULL; 
        right = NULL; 
    }
};

vector<vector<int>> zigzagLevelOrder(TreeNode *root)
{
    vector<vector<int>> ans;
    if (!root)
        return ans;

    bool direction = true;

    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        int levelWidth = q.size();

        vector<int> oneLevel(levelWidth);

        for (int i = 0; i < levelWidth; i++)
        {
            TreeNode *temp = q.front();
            q.pop();
            int index = direction ? i : levelWidth - i - 1;
            oneLevel[index] = temp->val;

            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        // toggle the direction
        direction = !direction;
        ans.push_back(oneLevel);
    }
    return ans;
}

int main() {

    


    return 0; 
}