#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <set>

using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

// 90 11 -1 -1 13 -1 -1 50 -1 -1
TreeNode *buildTree()
{

    int val;
    cout << "Enter the data" << endl;
    cin >> val;

    if (val == -1)
    {
        return NULL;
    }

    // step 1
    TreeNode *root = new TreeNode(val);

    // step 2
    root->left = buildTree();

    // step 3
    root->right = buildTree();

    return root;
}

void levelOrderTraversal(TreeNode *root)
{

    queue<TreeNode *> q;
    // initially
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        TreeNode *temp = q.front();
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
            cout << temp->val << " ";

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

vector<vector<int>> verticalTraversal(TreeNode *root)
{
    vector<vector<int>> ans;
    queue<pair<TreeNode *, pair<int, int>>> q;
    q.push({root, {0, 0}});

    map<int, map<int, multiset<int>>> mp;

    while (!q.empty())
    {
        auto front = q.front();
        q.pop();
        TreeNode *&node = front.first;
        auto coordinate = front.second;
        int &row = coordinate.first;
        int &col = coordinate.second;

        mp[col][row].insert(node->val);

        if (node->left)
            q.push({node->left, {row + 1, col - 1}});
        if (node->right)
            q.push({node->right, {row + 1, col + 1}});
    }

    // store the map into the vector to return as ans
    for (auto it : mp)
    {
        auto &colMap = it.second;
        vector<int> vLine;
        for (auto colMapIt : colMap)
        {
            auto &mset = colMapIt.second;
            vLine.insert(vLine.end(), mset.begin(), mset.end());
        }
        ans.push_back(vLine);
    }
    return ans;
}

int main()
{

    return 0;
}