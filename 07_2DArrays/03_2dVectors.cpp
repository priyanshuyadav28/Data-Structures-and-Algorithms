#include<iostream>
#include<vector>

using namespace std;

void printArr(vector<vector<int> > brr) {
    for (int i = 0; i < brr.size(); i++)
    {
        for (int j = 0; j < brr[i].size(); j++)
        {
            cout << brr[i][j] << " ";
        }

        cout << endl;
        
    }
}

int main() {

    // declaring a 1D vector
    // vector<int> arr;

    // declaring 2D vector
    // vector<vector<int>> brr;

    // declaring and initializing 2D vector
    // vector<vector<int> > brr {
    //     {1, 3, 5}, 
    //     {2, 9, 8}, 
    //     {7, 4, 6}
    // };

    vector <vector<int> > arr;

    vector<int> a{1, 2, 3};
    vector<int> b{4, 5, 6, 9, 3};
    vector<int> c{7, 8, 9, 1};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    // printArr(arr);

    // vector<vector<int> > arr(3, vector<int>(5, 0));

    vector<vector<int> > crr(5, vector<int>(5, -8));
    printArr(crr);

    return 0;
}