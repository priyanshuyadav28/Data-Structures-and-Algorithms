#include <iostream>
#include <vector>

using namespace std;

int findUnique(vector<int> arr) {
    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

vector<int> pairSum(vector<int> brr, int sum) {


    for (int i = 0; i < brr.size(); i++)
    {
        for (int j = i + 1; j < brr.size(); j++)
        {
            if (brr[i] + brr[j] == sum)
            {
                cout << brr[i] << ", " << brr[j] << endl; 

            }
            
        }
        
    }
    

}

void dutchNationalFlag(vector<int> crr) {

    int start = 0;
    int end = crr.size() - 1;

    int i = 0;

    while (start < end)
    {
        if (crr[i] == 0)
        {
            swap(crr[i], crr[start]);
            
            i++;    
            start++;
        }

        if (crr[i] == 1)
        {
            swap(crr[i], crr[end]);

            end--;
            // i++;
        }
  
    }


    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " ";
    }

}

int main()
{
    vector<int> arr = {1, 2, 4, 2, 1, 3, 6, 5, 5, 6, 4};

    // int uniqueElement = findUnique(arr);

    // cout << uniqueElement;


    // vector<int> brr = {1, 3, 5, 7, 2, 4, 6};
    // pairSum(brr, 9);

    vector<int> crr = {1, 0, 1, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0};
    dutchNationalFlag(crr);

    
    
    

    return 0;
}