#include <iostream>
#include <vector>
#include<string.h>

using namespace std;

// UINQUE ELEMENT IN AN ARRAY 
int findUnique(vector<int> arr)
{
    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

//  UNION OF ARRAY 
vector<int> unionOfArray(vector<int> ans, int arr1[], int arr2[], int size1, int size2)
{

    int size = size1 + size2;

    for (int i = 0; i < size1; i++)
    {
        int element = arr1[i];

        for (int j = 0; j < size2; j++)
        {
            if (element == arr2[j])
            {
                // mark
                arr2[j] = INT32_MIN;
            }
        }
    }

    for (int i = 0; i < size1; i++)
    {
        ans.push_back(arr1[i]);
    }

    for (int j = 0; j < size2; j++)
    {
        if (arr2[j] != INT32_MIN)
        {
            ans.push_back(arr2[j]);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << "The element at index " << i << " is " << ans[i] << endl;
    }

    return ans;
}

// intersection of arrays .

vector<int> intersectionArray(vector<int> ans, vector<int> arrFirst, vector<int> arrSecond)
{

    for (int i = 0; i < arrFirst.size(); i++)
    {
        int element = arrFirst[i];
        for (int j = 0; j < arrSecond.size(); j++)
        {
            if (element == arrSecond[j])
            {
                // mark
                arrSecond[j] = -1;
                ans.push_back(element);
            }
        }
    }

    return ans;
}


void pairSum(vector<int> arr, int sum) {

    // vector<string> pairs;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                // ans.push_back(arr[i]);
                // ans.push_back(arr[j]);

                // pairs.push_back(to_string(arr[i]) + "," + to_string(arr[j]));
                cout << arr[i] << "," << arr[j] << endl;
            }
            
        }
        
    }
    
}

// triplet sum 

void tripletSum(vector<int> arr, int sum) {
    for (int i = 0; i < arr.size(); i++)
    {
        int element1 = arr[i];

        for (int j = i + 1; j < arr.size(); j++)
        {
            int element2 = arr[j];

            for (int k = j + 1; k < arr.size(); k++)
            {
                int element3 = arr[k];

                if (element1 + element2 + element3 == sum)
                {
                    cout << element1 << "," << element2 << "," << element3 << endl;
                }
                
            }
            
        }
        
    }
    
}

// sort zeroes and one's
void sortZeroAndOne(vector<int> arr) {
    int start = 0;
    int end = arr.size() - 1;

    int i = 0;

    while (start < end)
    {
        if (arr[i] == 0)
        {
            int temp = arr[i];
            arr[i] == arr[start];
            arr[start] = temp;

            i++;
            start++;
        }

        if (arr[i] == 1)
        {
            int temp = arr[i];
            arr[i] = arr[end];
            arr[end] = temp;

            end--;
            // i++;
            
        }
        
        
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " " ;
    }
    
}



int main()
{
    // UNIQUE ELEMENT IN AN ARRAY 
    // vector<int> arr{1, 2, 4, 2, 1, 3, 6, 5, 5, 6, 4};

    // int uniqueElement = findUnique(arr);

    // cout << uniqueElement;

    // UNION OF ARRAY 
    // int arr1[] = {1, 2, 3};
    // int size1 = 3;

    // int arr2[] = {3, 4, 5, 1};
    // int size2 = 2;

    // vector<int> ans;
    // vector<int> solution = unionOfArray(ans, arr1, arr2, size1, size2);

    // INTERSECTION

    // vector<int> arrFirst{1, 2, 3, 4, 6, 8};
    // vector<int> arrSecond{3, 4};
    // vector<int> ans;

    // vector<int> solution = intersectionArray(ans, arrFirst, arrSecond);

    // for (int i = 0; i < solution.size(); i++)
    // {
    //     cout << solution[i] << " ";
    // }


    // PAIR SUM
    // vector<int> arr {1, 3, 5, 7, 2, 4, 6};
    // int sum = 9;

    // pairSum(arr, sum);
    // vector<int> ans ;
    
    // vector<int> answer = pairSum(ans, arr, sum);
    // for (int i = 0; i < answer.size(); i++)
    // {
    //     cout << answer[i] << " " ;
    // }

    // Triplet sum 
    // vector<int> arr {10, 20, 30, 40, 50};
    // int sum = 80;

    // tripletSum(arr, sum);


    // SORT ZEROES AND ONCE 

    vector<int> arr {0, 1, 1, 0, 1, 0, 1, 0, 1};
    sortZeroAndOne(arr);
    
    
    



    

    return 0;
}