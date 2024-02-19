#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;


void solve(int arr[]) {

    cout << "size inside solve function" <<  sizeof(arr) << endl;
}
void update(int* p) {

    *p = *p + 10;
}


void passByRef(int arr[]) {

    cout << arr << endl;
    cout << &arr << endl;

    arr[0] = 50;

}



int main()
{

    // int arr[4] = {12, 44, 16, 18};

    // cout << arr << endl;  // address of base address
    // cout << arr[0] << endl; // value at 0 index

    // cout << &arr << endl; // address of base address
    // cout << &arr[0] << endl;  // address of 0 index which again is base address


    // int *ptr = arr;

    // cout << arr << endl;
    // cout << ptr << endl;
    // cout << &ptr << endl;
    // cout << *ptr << endl;

    // cout << endl;


    // cout << *arr << endl;
    // cout << *arr + 1 << endl;
    // cout << *(arr) + 1 << endl; 
    // cout << *(arr + 1) << endl; // base address + 1 
    // cout << *(arr + 2) << endl; // base address + 2 
    // cout << *(arr + 3) << endl; // base address + 3 

    // cout << endl;

    // cout << *ptr << endl;
    // cout << *ptr + 1 << endl;
    // cout << *(ptr) + 1 << endl;
    // cout << *(ptr + 1) << endl; // address of ptr + 1 then dereference so it will point to the value at next memory location 



    // int i = 0;

    // cout << arr[i] << endl;
    // cout << i[arr] << endl; // this will not throw an error because internally both are resolved as *(arr + i) and *(i + arr)

    // cout << *(arr + i) << endl;
    // cout << *(i + arr) << endl;

    // int* p = arr;
    // cout << p << endl;

    // p = p + 2;
    // cout << p << endl;
    // cout << *p << endl;
    
    // int* q = arr + 1; 
    // cout << "q = " << q << endl;
    // cout << "*q = " << *q << endl; 
    // cout << "&arr[1] = " << &arr[1] << endl;


    // int arr[] = {12, 44, 18, 98};

    // cout << "arr = " << arr << endl;


    // pointers in character array 

    // char ch[10] = "Babbar";

    // char* c = ch;

    // NOTE -> in char array ch do not prints the address it prints the whole value stored in it
    // cout << ch << endl;  // *(c + 0)
    // cout << &ch << endl;
    // cout << ch[0] << endl;

    // cout << c << endl;
    // cout << &c << endl;
    // cout << *c << endl;

    // cout << endl;

    // char name[] = "SherBano";
 
    // char* cptr = &name[0];

    // NOTE-> name will store the hole string and not the address like arrays 
    // cout << "name = " << name << endl;

    // cout << "&name = " << &name << endl;
    // cout << "*(name + 3) = " << *(name + 3) << endl;
    
    //NOTE-> in case of char value is stored in the pointer variable and not address like in arrays.
    // cout << "cptr = " << cptr << endl;  

    // cout << "&cptr = " << &cptr << endl;
    // cout << "*(cptr + 3) = " << *(cptr + 3) << endl;
    // cout << "cptr + 2 = " << cptr + 2 << endl;
    // cout << "*cptr = " << *cptr << endl;
    // cout << "cptr + 8 = " << cptr + 8 << endl;

    // cout << endl;

    // char ch = 'k';
    
    // char* cptr = &ch;

    // cout << cptr << endl;  // this would print  k and garbage values till null character is not found. In case of string null character is added automatically. cptr = *(cptr + 0)

    // cout << ch << endl; 


    // cout << endl;

    // char name[10] = "babbar";

    // NOTE-> note this is a char array and it will print the whole value from 0 to till null character  this will give the address of zeroth index or the starting index
    // cout << name << endl;



    // POINTERS WITH FUNCTIONS 

    // int arr[10] = {1, 2, 3, 4};

    // cout << "size in main function " << sizeof(arr) << endl;

    // solve(arr);



    // PASS BY REFERENCE 

    // int arr[10] = {1, 8, 9, 2};

    // cout << arr << endl;
    // cout << &arr << endl;

    // printing the value in arr
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // cout << endl;


    // calling the function passByRef
    // passByRef(arr);

    // again printing the array to see the updated/changed values 

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    
    // cout << endl;

    

    int a = 5;

    int* ptr = &a;
    
    cout << *ptr << endl;

    update(ptr);
    
    cout << *ptr << endl;









    return 0;
}