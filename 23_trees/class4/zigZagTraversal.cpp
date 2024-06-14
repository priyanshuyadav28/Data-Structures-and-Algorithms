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

void zigZagTraversal(Node *root, vector<vector<int>> &ans)
{
    if (root == NULL)
    {
        return;
    }

    bool flag = true;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int width = q.size();
        vector<int> currLevel(width);

        for (int i = 0; i < width; i++)
        {   
            Node* temp = q.front(); 
            q.pop(); 

            int index = flag ? index : width - i - 1;
            currLevel[index] = temp->data;

            if (temp->left)
                q.push(temp->left); 
            if (temp->right)
                q.push(temp->right); 
        }

        flag = !flag; 
        ans.push_back(currLevel);
    }
}

int main()
{

    vector<vector<int>> ans;

    return 0;
}