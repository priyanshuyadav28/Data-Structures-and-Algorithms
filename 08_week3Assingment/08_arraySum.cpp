#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
Given two array A[0….N-1] and B[0….M-1] of size N and M respectively, representing two numbers such that every element of arrays represent a digit. For example, A[] = { 1, 2, 3} and B[] = { 2, 1, 4 } represent 123 and 214 respectively. The task is to find the sum of both the numbers.

Example 1:

Input : A[] = {1, 2}, B[] = {2, 1}
Output : 33
Explanation:
N=2, and A[]={1,2}
M=2, and B[]={2,1}
Number represented by first array is 12.
Number represented by second array is 21
Sum=12+21=33
*/

string sumCalc(vector<int> a, vector<int> b)
{

    string ans; // since we have to return the ans in string 

    int i = a.size() - 1;
    int j = b.size() - 1;

    int carry = 0;

    // to add the array when both the array have elements
    while (i >= 0 && j >= 0)
    {
        int x = a[i] + b[j] + carry;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;

        i--;
        j--;
    }

    // this loop is to add the array when one array a has some element and the other array b has no element or number to add
    // ex.  a  = 1 4 3
    //      b =    3 1 here 143 + 31 so hundreads place of b is empty 
    while (i >= 0)
    {

        int x = a[i] + 0 + carry; // so we have taken 0 
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;

        i--;
    }

    // this loop is to add the array when one array b has some element and the other array a has no element or number to add
    // ex.  a  =   4 3
    //      b =  1 3 1 here 143 + 31 so hundreads place of b is empty 
    while (j >= 0)
    {

        int x = 0 + b[j] + carry; // so we have taken 0 
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;

        j--;
    }

    // this loop is created when the array is traversed till its first element and still there is some carry left so we will push that carry to 
    // ex. 9 1 4
    //     1 3 2 here when we will add 9 + 1 then 0 will be pushed and 1 will be left as carry so we have to push that one too  .
    if (carry)
    {
        ans.push_back(carry + '0');
    }       

    // since we are storing the answer in a string array so if at first position there is zero we will remove it. obviously when we are performing this step so at this point of time we have not reversed our array so the 0 will be at last position  thats why we will check wheather there is a 0 at last position and if found we will pop it out . 
    // note that when we will store it in integer array then there will be no problem and we do not need this step 
    while (ans[ans.size() - 1] == '0')
    {
        ans.pop_back();
    }

    // since the answer is pushed in the array is opposite order so we have to reverse it to make it correct 
    // reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{

    vector<int> a{9, 5, 4, 9};
    vector<int> b{2, 1, 4};

    string ans = sumCalc(a, b);
    cout << ans;

    return 0;
}