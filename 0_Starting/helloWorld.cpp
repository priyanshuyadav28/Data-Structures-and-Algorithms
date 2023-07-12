#include<iostream>
using namespace std;

int main() {
    // cout<<"Enter a number"<<endl;
    // int a;
    // cin>>a;
    // cout<<"You have entered: "<<a<<endl; 

    cout<<"The size of integer is "<<sizeof(int)<<" byte"<<endl;
    char ch = 'a';
    cout<<"The value of a is: "<<ch<<endl; 
    cout<<"The value of a is: "<<(int)ch<<endl; // typecasting in int will give 97 which is the ASCII value for small a 
    
    float b = 2.32;
    cout<<"Size of float is : "<<sizeof(b);
    

    char ch = 97;
    cout << "The value of ch is : " << ch << endl; // This is implicit(automatic) type conversion since the datatype is char so the compiler is performing this

    int num = 98;
    cout << "The value of num is : " << char(num) << endl; // this i explicit typecasting since this is being done from our side. 
    

    return 0;
}