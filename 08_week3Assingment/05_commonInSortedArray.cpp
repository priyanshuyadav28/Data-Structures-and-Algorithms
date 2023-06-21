#include <iostream>
#include <vector>
#include <unordered_map>
#include<set>

using namespace std;

/* Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
Note: can you take care of the duplicates without using any additional Data Structure?

Example 1:

Input:
n1 = 6; A = {1, 5, 10, 20, 40, 80}
n2 = 5; B = {6, 7, 20, 80, 100}
n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}
Output: 20 80
Explanation: 20 and 80 are the only
common elements in A, B and C.
    */


vector<int> commonElements(int a[], int b[], int c[], int n1, int n2, int n3)
{
    vector<int> ans;
    set<int> st; // we have creted set so that if there are same elemtns multiple times in the array then they can be stored only once ex a[3, 3, 3]
         // b[3, 3, 3]
         // c[3, 3, 3]
        //  if we will print the ans or return then 3 3 3 will be returned in order to return 3 once we store it in set. 

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n1 && j < n2 && k < n3)
    {
        if (a[i] == b[j] && b[j] == c[k])
        {
            st.insert(a[i]);
            i++;
            j++;
            k++;
        }

        else if (a[i] < b[j])
        {
            i++;
        }

        else if (b[j] < c[k])
        {
            j++;
        }

        else
        {
            k++;
        }
    }

    for (auto i : st)
    {
        ans.push_back(i);
    }
    
    
    return ans;
}

int main()
{

    int a[] = {1, 5, 10, 20, 40, 80};
    int b[] = {6, 7, 20, 80, 100};
    int c[] = {3, 4, 15, 20, 30, 70, 80, 120};

    int n1 = 6;
    int n2 = 5;
    int n3 = 8;

    vector<int> ans = commonElements(a, b, c, n1, n2, n3);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
