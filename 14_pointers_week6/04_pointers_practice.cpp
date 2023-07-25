#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

int main() {

    // question 1 
    // float f = 10.5; 
    // float p = 2.5;

    // float* ptr = &f;

    // *(ptr)++;
    // *ptr = p;

    // cout << *ptr << " " << f << " " << p;

    // question 2
    // int a = 7;
    // int b = 17;
    // int* c = &b;
    // *c = 7;

    // cout << a << " " << b << endl;

    // int* ptr = 0;
    // int a = 10;
    // *ptr = a;

    // cout << *ptr << endl; // this would give an error because ptr is a null pointer and is not pointing anywhere and has no value and dereferencing it will give error 

    // question 3 
    // which of the following gives the memory address of variable 'b' pointed by pointer 'a' i.e. 
    // int b = 10;
    // int* a = &b;
    // ans = a will give the memory location of b


    // question 4-> what will be the output ? 
    // char ch = 'a';
    // char* ptr = &ch;
    // ch++;

    // cout << *ptr << endl; 

    // question 5 
    // int a = 7;
    // int *c = &a;

    // c = c + 1;

    // cout << a << " " << *c << endl;

    

    // question 6 -> assume the memory address of variable 'a' is 400 (and integeer takes 4 bytes), what will be the output 

    // int a = 7;
    // int *c = &a;
    // c = c + 3;
    // cout << c << endl; // 400 + 3 = 412 since integer takes 4 bytes (3*4) = 12

    // NOTE
    // cout << *c << endl // -> this would give garbage value as c will be at 400 address and after adding 3 more address it would go to 412 and c will start pointing to 412 address but there will be no value stored so *c (dereferencing c) at 412 will throw garbage value. 


    // question 7 -> assume memory address of variable 'a' is :200 and a double variable if of size 8 bytes. what will be the output 

    // double a = 10.54;
    // double *d = &a;
    // d = d + 1;

    // cout << d << endl;


    // question 8 -> assume integer takes 4 bytes and integer pointer 8 bytes. 

    // int a[5]; // int takes 4 bytes 5 * 4 = 20
    // int *c;  // pointer takes 8 bytes c = 8 and *c = 8

    // cout << sizeof(a) << " " << sizeof(c);


    // question 9 -> 
    // int a[] = {1, 2, 3, 4};
    
    // cout << *(a) << " " << *(a + 1) << endl;
    // NOTE: -> in case of array a will point to the base address of the array which is a[0], &a will also point at that address only and since they are pointing to the base address *a will print the value at that base address in this case it is 1 and a + 1 will point to next arry address with a + 1 * 4 since it is int array and dereferencing it will give the value at a + 1 which in this case is 2 
    // *(a + 1) = value at (a + 1) address 


    // question 10 -> assume address of 0th index of array 'a' is 200 . what is the output 

    // int a[3] = {1, 2, 3};
    // cout << *(a + 2) << endl;

    // question 11 -> 
    // int a[] = {1, 2, 3, 4};
    // int* p = a++;

    // cout << *p << endl; // throws an error as a++ is not possible on constant memory like stack 

    // int arr[] = {4, 5, 6, 7};
    // int* p = (arr + 1);

    // cout << *arr + 9 << endl;  
    // cout << *(arr + 1) << endl;
    // cout << p << endl;
    // cout << *p << endl;


    // question 12 -> assume address of 0th index of array 'b' is 200. what is the output -

    // char b[] = "xyz";
    // char *c = &b[0];

    // cout << c << endl; // this would print xyz as in case of char cout behaves differently

    // cout << b << endl; // this would also print complete string xyz 

    // cout << *c << endl; // this will print only x as *c will be holding the value at address of b[0];  


     


     


   


    return 0; 
}