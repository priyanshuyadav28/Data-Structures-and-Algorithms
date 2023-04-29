#include<iostream>
#include<vector>

using namespace std;

int main() {
    // create Vector
    // vector<int> arr;
 
    // int ans = (sizeof(arr) / sizeof(int));
    // cout << ans << endl;

    // cout << arr.size() << endl;
    // cout << arr.capacity() << endl;

    // // insert 
    // arr.push_back(5);
    // arr.push_back(2);
    // arr.push_back(9);

    // // print
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout <<"The element at index " << i << " is " <<  arr[i] << " " << endl ;
    // }
    // cout << endl;
    // // remove
    // arr.pop_back(); // this will remove the last element from the array . 

    // printing
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout <<"The element at index " << i << " is " <<  arr[i] << " " << endl ;
    // }

    // cout << endl;
    

    // another method to create a vector 
    int n;

    // vector<int> brr(10); // 10 is the size of the vector array 

    // cout << "Enter the size of vector: " << endl;
    // cin >> n;

    // vector<int> brr(n, -1);  // 10 is the size of the vector array and all the defalut value which was 0 by defalut are replaced by -1 now 

    // cout << "size of brr is " << brr.size() << endl;
    // cout << "capacity of brr is " << brr.capacity() << endl;

    // cout << endl;

    // for (int i = 0; i < brr.size(); i++)
    // {
    //     cout <<"The element at index " << i << " is " <<  brr[i] << " " << endl ;
    // }

    vector<int> crr{10, 20, 30, 40,  50};

    for (int i = 0; i < crr.size(); i++)
    {
        cout <<"The element at index " << i << " is " <<  crr[i] << " " << endl ;
    }

    // capacity = how many elements an array or vector can store 
    // size = it is the size of the array . 



    return 0;
}