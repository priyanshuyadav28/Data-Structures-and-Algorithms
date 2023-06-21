#include<iostream>
#include<vector>
using namespace std;


int main() {

    // understanding the array push_back() method.

    vector<int> arr;

    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(9);
    
    // whenever we push an element in the vector it is pushed from the back that means first 5 will be pushed and it will be on the 0 index and then 3 and it will be on 1 index and so on and so forth

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " " << i << endl;
    }
    


    return 0;
}